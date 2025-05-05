@interface SASportsMatchupDetailsSnippet : SASportsScheduleSnippet
@property (nonatomic) BOOL isModalView;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)isModalView;
- (void)setIsModalView:;
+ (id)matchupDetailsSnippet;
+ (id)matchupDetailsSnippetWithDictionary:context:;
@end
