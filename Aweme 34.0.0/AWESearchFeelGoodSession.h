@interface AWESearchFeelGoodSession : NSObject
@property (nonatomic) NSString taskID;
@property (nonatomic) q surveyType;
@property (nonatomic) NSMutableDictionary logExtra;
- (void)setLogExtra:;
- (id)logExtra;
- (long long)surveyType;
- (void)setSurveyType:;
- (void).cxx_destruct;
- (void)setTaskID:;
- (id)taskID;
@end
