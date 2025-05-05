@interface SASportsAthleteSnippet : SASportsSnippet
@property (nonatomic) NSArray athletes;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)athletes;
- (void)setAthletes:;
+ (id)athleteSnippet;
+ (id)athleteSnippetWithDictionary:context:;
@end
