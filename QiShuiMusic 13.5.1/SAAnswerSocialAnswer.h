@interface SAAnswerSocialAnswer : SAAnswerAbstractSocialPost
@property (nonatomic) NSNumber selectedAnswer;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)selectedAnswer;
- (void)setSelectedAnswer:;
+ (id)socialAnswer;
+ (id)socialAnswerWithDictionary:context:;
@end
