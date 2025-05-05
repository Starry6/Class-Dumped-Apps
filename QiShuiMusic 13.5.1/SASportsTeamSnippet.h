@interface SASportsTeamSnippet : SASportsSnippet
@property (nonatomic) NSArray teams;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)teams;
- (void)setTeams:;
+ (id)teamSnippet;
+ (id)teamSnippetWithDictionary:context:;
@end
