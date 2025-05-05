@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)absPropertyID:;
- (unsigned int)absPropertyType;
- (id)CNLabeledValueFromABSMultiValueTranform;
- (id)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
- (void)encodeUsingCoder:contact:;
- (BOOL)abPropertyID:;
- (void)setCNValue:onContact:;
- (BOOL)isEqualForContact:other:;
- (id)init;
- (BOOL)isNonnull;
- (BOOL)canUnifyValue:withValue:;
- (id)CNValueForContact:;
- (void)decodeUsingCoder:contact:;
- (Class)labeledValueClass;
- (id)dictionaryTransform;
- (id)fromDictionaryTransform;
- (id)summarizationKeys;
- (id)CNLabeledValueValueFromABMultiValueValue:;
- (id)ABMultiValueValueFromCNLabeledValueValue:;
@end
