@interface TISupplementalLexicon : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) Q searchPrefixes;
@property (nonatomic) S searchPrefixCharacter;
@property (nonatomic) Q identifier;
- (id)initWithItems:;
- (id)items;
- (unsigned long long)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setItems:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithItems:searchPrefixes:;
- (unsigned long long)searchPrefixes;
- (unsigned short)searchPrefixCharacter;
- (BOOL)isEqualToSupplementalLexicon:;
- (void)setSearchPrefixes:;
+ (BOOL)supportsSecureCoding;
@end
