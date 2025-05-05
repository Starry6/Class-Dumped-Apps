@interface CNDatesDescription : CNMultiValuePropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)absPropertyID:;
- (unsigned int)absPropertyType;
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
- (BOOL)isValue:preferredToUnifiedValue:;
- (id)fromPlistTransform;
- (Class)labeledValueClass;
- (BOOL)isValidMultiValueValue:error:;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:length:;
- (id)CNLabeledValueValueFromABMultiValueValue:;
- (id)ABMultiValueValueFromCNLabeledValueValue:;
@end
