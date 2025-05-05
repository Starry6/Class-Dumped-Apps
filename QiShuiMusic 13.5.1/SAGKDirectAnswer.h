@interface SAGKDirectAnswer : AceObject
@property (nonatomic) NSString answer;
@property (nonatomic) NSString confidenceLevel;
@property (nonatomic) SAGKSpeakableAnswer speakableAnswer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)confidenceLevel;
- (id)groupIdentifier;
- (void)setConfidenceLevel:;
- (id)encodedClassName;
- (id)answer;
- (void)setAnswer:;
- (id)speakableAnswer;
- (void)setSpeakableAnswer:;
+ (id)directAnswer;
+ (id)directAnswerWithDictionary:context:;
@end
