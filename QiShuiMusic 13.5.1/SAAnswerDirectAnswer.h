@interface SAAnswerDirectAnswer : AceObject
@property (nonatomic) NSString answer;
@property (nonatomic) SAAnswerSpeakableAnswer speakableAnswer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)answer;
- (void)setAnswer:;
- (id)speakableAnswer;
- (void)setSpeakableAnswer:;
+ (id)directAnswer;
+ (id)directAnswerWithDictionary:context:;
@end
