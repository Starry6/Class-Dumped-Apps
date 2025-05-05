@interface SAAnswerSocialStructuredAnswer : AceObject
@property (nonatomic) NSString category;
@property (nonatomic) NSArray socialQuestions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setCategory:;
- (id)encodedClassName;
- (id)category;
- (id)socialQuestions;
- (void)setSocialQuestions:;
+ (id)socialStructuredAnswer;
+ (id)socialStructuredAnswerWithDictionary:context:;
@end
