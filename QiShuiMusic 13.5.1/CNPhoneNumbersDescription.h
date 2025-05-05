@interface CNPhoneNumbersDescription : CNMultiValuePropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)absPropertyID:;
- (unsigned int)absPropertyType;
- (id)CNLabeledValueFromABSMultiValueTranform;
- (id)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
- (BOOL)isABSLabeledValueValue:equalToValue:;
- (void)encodeUsingCoder:contact:;
- (BOOL)abPropertyID:;
- (void)setCNValue:onContact:;
- (BOOL)isEqualForContact:other:;
- (id)init;
- (BOOL)isNonnull;
- (BOOL)canUnifyValue:withValue:;
- (id)CNValueForContact:;
- (void)decodeUsingCoder:contact:;
- (id)standardLabels;
- (id)fromPlistTransform;
- (id)equivalentLabelSets;
- (id)stringForIndexingForContact:;
- (Class)labeledValueClass;
- (id)plistTransform;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:length:;
- (id)CNLabeledValueValueFromABMultiValueValue:;
- (id)ABMultiValueValueFromCNLabeledValueValue:;
@end
