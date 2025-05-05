@interface CNInternalIdentifierDescription : CNPropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeUsingCoder:contact:;
- (Class)valueClass;
- (BOOL)abPropertyID:;
- (void)setCNValue:onContact:;
- (BOOL)isEqualForContact:other:;
- (id)init;
- (BOOL)isEqualIgnoringIdentifiersForContact:other:;
- (id)CNValueForContact:;
- (id)CNValueFromABValue:;
- (void)decodeUsingCoder:contact:;
- (id)ABValueFromCNValue:;
@end
