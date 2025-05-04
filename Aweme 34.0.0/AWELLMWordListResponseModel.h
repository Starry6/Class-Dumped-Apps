@interface AWELLMWordListResponseModel : AWEBaseApiModel
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSArray wordList;
@property (nonatomic) NSString userMsg;
- (id)wordList;
- (void)setWordList:;
- (id)userMsg;
- (void)setUserMsg:;
- (void)setSessionID:;
- (id)sessionID;
- (void).cxx_destruct;
+ (id)wordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
