@interface SASportsScheduleSnippet : SASportsSnippet
@property (nonatomic) NSArray matchups;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)matchups;
- (void)setMatchups:;
+ (id)scheduleSnippet;
+ (id)scheduleSnippetWithDictionary:context:;
@end
