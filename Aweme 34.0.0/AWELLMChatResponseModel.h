@interface AWELLMChatResponseModel : AWEBaseApiModel
@property (nonatomic) q sessionID;
@property (nonatomic) NSArray answers;
- (void)setSessionID:;
- (id)init;
- (long long)sessionID;
- (void).cxx_destruct;
- (id)answers;
- (void)setAnswers:;
+ (id)answersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
