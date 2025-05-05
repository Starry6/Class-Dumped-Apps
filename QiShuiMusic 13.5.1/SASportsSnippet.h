@interface SASportsSnippet : SAUISnippet
@property (nonatomic) SASportsLeague league;
@property (nonatomic) SAUIAppPunchOut leagueAppPunchOut;
@property (nonatomic) SAUIAppPunchOut punchOut;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setPunchOut:;
- (id)punchOut;
- (id)league;
- (void)setLeague:;
- (id)leagueAppPunchOut;
- (void)setLeagueAppPunchOut:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
