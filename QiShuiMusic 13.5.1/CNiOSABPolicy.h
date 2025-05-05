@interface CNiOSABPolicy : CNPolicy
- (void)dealloc;
- (id)initWithCoder:;
- (BOOL)isEqualToPolicy:;
- (BOOL)isReadonly;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (BOOL)shouldAddContact:;
- (id)supportedLabelsForContactProperty:;
- (BOOL)shouldSetValue:property:contact:replacementValue:;
- (unsigned long long)maximumCountOfValuesForContactProperty:;
- (id)initWithAddressBookPolicy:readOnly:;
- (id)_orderedLabels:withOrder:;
- (unsigned long long)maximumCountOfValuesForContactProperty:label:;
- (BOOL)shouldRemoveContact:;
+ (BOOL)supportsSecureCoding;
@end
