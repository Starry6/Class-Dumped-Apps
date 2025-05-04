@interface AWESearchAIGCSubQuestionDataController : AWESearchAIGCSubDataController
@property (nonatomic) NSMutableDictionary questionDataParams;
- (void)appendData:ofType:;
- (id)subRequestParams;
- (void)appendQuestionData:;
- (id)questionDataParams;
- (void)setQuestionDataParams:;
- (void)resetData;
- (void).cxx_destruct;
@end
