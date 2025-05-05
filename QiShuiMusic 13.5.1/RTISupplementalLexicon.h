@interface RTISupplementalLexicon : NSObject
@property (nonatomic) NSDictionary iconForIdentifier;
@property (nonatomic) TISupplementalLexicon lexicon;
@property (nonatomic) Q identifier;
- (unsigned long long)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)lexicon;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTISupplementalLexicon:iconProvider:;
- (void)enumerateSupplementalItems:;
- (id)initWithTISupplementalLexicon:iconForIdentifier:;
- (id)iconForIdentifier:;
- (id)iconForIdentifier;
- (void)setIconForIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
