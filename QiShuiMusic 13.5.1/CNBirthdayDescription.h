@interface CNBirthdayDescription : CNPropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)absPropertyID:;
- (unsigned int)absPropertyType;
- (id)ABSValueFromCNValue:;
- (id)CNValueFromABSValue:;
- (void)encodeUsingCoder:contact:;
- (Class)valueClass;
- (BOOL)abPropertyID:;
- (void)setCNValue:onContact:;
- (BOOL)isEqualForContact:other:;
- (id)init;
- (BOOL)canUnifyValue:withValue:;
- (id)CNValueForContact:;
- (id)CNValueFromABValue:;
- (void)decodeUsingCoder:contact:;
- (id)CNValueFromABBytes:length:;
- (id)ABValueFromCNValue:;
- (BOOL)isValidValue:error:;
- (BOOL)isValue:preferredToUnifiedValue:;
- (id)fromPlistTransform;
@end
