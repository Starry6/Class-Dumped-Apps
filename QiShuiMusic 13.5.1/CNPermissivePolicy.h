@interface CNPermissivePolicy : CNPolicy
- (id)initWithCoder:;
- (BOOL)isReadonly;
- (BOOL)shouldAddContact:;
- (id)supportedLabelsForContactProperty:;
- (unsigned long long)maximumCountOfValuesForContactProperty:;
- (unsigned long long)maximumCountOfValuesForContactProperty:label:;
- (BOOL)shouldRemoveContact:;
- (id)unsupportedAttributesForLableledContactProperty:;
- (id)unsupportedKeyPathsForContactProperty:;
- (BOOL)shouldSetValue:ofProperty:onContact:replacementValue:;
- (BOOL)isContactPropertySupported:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedPermissivePolicy;
@end
