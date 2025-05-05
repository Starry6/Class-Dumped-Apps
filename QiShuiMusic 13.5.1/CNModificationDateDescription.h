@interface CNModificationDateDescription : CNPropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)absPropertyID:;
- (unsigned int)absPropertyType;
- (void)encodeUsingCoder:contact:;
- (Class)valueClass;
- (BOOL)abPropertyID:;
- (void)setCNValue:onContact:;
- (BOOL)isEqualForContact:other:;
- (id)init;
- (BOOL)setABValue:onABPerson:error:;
- (id)CNValueForContact:;
- (void)decodeUsingCoder:contact:;
- (id)CNValueFromABBytes:length:;
@end
