@interface SASportsAthleteComparisonSnippetItemDetails : AceObject
@property (nonatomic) SAUIAppPunchOut leagueAppPunchOut;
@property (nonatomic) SASportsMetadata metadata;
@property (nonatomic) SAUIAppPunchOut providerPunchOut;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)metadata;
- (void)setMetadata:;
- (id)encodedClassName;
- (id)leagueAppPunchOut;
- (void)setLeagueAppPunchOut:;
- (id)providerPunchOut;
- (void)setProviderPunchOut:;
+ (id)athleteComparisonSnippetItemDetails;
+ (id)athleteComparisonSnippetItemDetailsWithDictionary:context:;
@end
