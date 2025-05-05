@interface SAMediaContentRatingRestrictions : AceObject
@property (nonatomic) q appRestriction;
@property (nonatomic) NSString countryCode;
@property (nonatomic) q movieRestriction;
@property (nonatomic) q tvRestriction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCountryCode:;
- (id)countryCode;
- (id)groupIdentifier;
- (id)encodedClassName;
- (long long)appRestriction;
- (void)setAppRestriction:;
- (long long)movieRestriction;
- (void)setMovieRestriction:;
- (long long)tvRestriction;
- (void)setTvRestriction:;
+ (id)mediaContentRatingRestrictions;
+ (id)mediaContentRatingRestrictionsWithDictionary:context:;
@end
