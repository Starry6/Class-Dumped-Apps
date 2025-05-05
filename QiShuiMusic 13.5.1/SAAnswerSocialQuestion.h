@interface SAAnswerSocialQuestion : SAAnswerAbstractSocialPost
@property (nonatomic) NSArray socialAnswers;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)socialAnswers;
- (void)setSocialAnswers:;
+ (id)socialQuestion;
+ (id)socialQuestionWithDictionary:context:;
@end
