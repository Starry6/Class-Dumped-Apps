@interface AWEIMInputFAQModel : MTLModel
@property (nonatomic) NSArray answerList;
@property (nonatomic) NSArray trayPhraseList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)answerList;
- (id)trayPhraseList;
- (void)setAnswerList:;
- (void)setTrayPhraseList:;
- (void).cxx_destruct;
+ (id)answerListJSONTransformer;
+ (id)trayPhraseListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
