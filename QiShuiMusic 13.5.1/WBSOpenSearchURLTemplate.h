@interface WBSOpenSearchURLTemplate : NSObject
@property (nonatomic) NSString templateString;
- (id)templateBySubstitutingValues:;
- (id)initWithString:;
- (BOOL)includesParameter:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)templateBySubstitutingValue:forParameter:;
- (void)encodeWithCoder:;
- (id)templateByAddingParameter:asURLQueryParameter:;
- (id)templateString;
- (id)URLWithSearchTerms:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
