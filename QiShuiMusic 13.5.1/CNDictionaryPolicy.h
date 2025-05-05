@interface CNDictionaryPolicy : CNPermissivePolicy
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)supportedLabelsForContactProperty:;
- (unsigned long long)maximumCountOfValuesForContactProperty:;
- (unsigned long long)maximumCountOfValuesForContactProperty:label:;
- (id)unsupportedAttributesForLableledContactProperty:;
- (BOOL)isContactPropertySupported:;
- (id)contactRestrictionsForLabeledProperty:;
+ (BOOL)supportsSecureCoding;
@end
