@interface CNPolicy : NSObject
@property (nonatomic) BOOL readonly;
- (unsigned long long)_cnui_maximumNumberOfValuesForProperty:;
- (id)initWithCoder:;
- (BOOL)isReadonly;
- (void)encodeWithCoder:;
- (BOOL)shouldAddContact:;
- (id)supportedLabelsForContactProperty:;
- (BOOL)shouldSetValue:property:contact:replacementValue:;
- (unsigned long long)maximumCountOfValuesForContactProperty:;
- (unsigned long long)maximumCountOfValuesForContactProperty:label:;
- (BOOL)shouldRemoveContact:;
- (id)unsupportedAttributesForLableledContactProperty:;
- (BOOL)isContactPropertySupported:;
- (BOOL)_validateLabeledValueArrayLabels:forContactProperty:replacementValue:;
- (BOOL)_validateLabeledValueArrayAttributeSupport:forContactProperty:replacementValue:;
- (id)_replacementLabeledValue:omittingKeys:;
+ (BOOL)supportsSecureCoding;
@end
