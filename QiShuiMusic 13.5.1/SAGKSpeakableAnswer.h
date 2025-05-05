@interface SAGKSpeakableAnswer : AceObject
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) NSString templateName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)parameters;
- (id)encodedClassName;
- (void)setParameters:;
- (id)templateName;
- (void)setTemplateName:;
+ (id)speakableAnswer;
+ (id)speakableAnswerWithDictionary:context:;
@end
