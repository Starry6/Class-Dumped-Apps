@interface TIMutableCharacterSetDescription : TICharacterSetDescription
- (void)addCharactersInString:;
- (void)removeCharactersInString:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
