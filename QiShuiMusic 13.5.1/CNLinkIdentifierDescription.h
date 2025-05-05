@interface CNLinkIdentifierDescription : CNPropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeUsingCoder:contact:;
- (BOOL)abPropertyID:;
- (void)setCNValue:onContact:;
- (BOOL)isEqualForContact:other:;
- (id)init;
- (id)ABValueForABPerson:;
- (BOOL)setABValue:onABPerson:error:;
- (BOOL)isEqualIgnoringIdentifiersForContact:other:;
- (id)CNValueForContact:;
- (void)decodeUsingCoder:contact:;
@end
