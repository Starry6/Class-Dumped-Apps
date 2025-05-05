@interface SAAnswerSnippet : SAUISnippet
@property (nonatomic) SAUIAppPunchOut answerPunchOut;
@property (nonatomic) NSArray answers;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)answers;
- (void)setAnswers:;
- (id)answerPunchOut;
- (void)setAnswerPunchOut:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
