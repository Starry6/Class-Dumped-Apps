@interface AWESearchFeelGoodSurveyModel : AWEBaseApiModel
@property (nonatomic) AWESearchFeelGoodSurveyTaskModel surveyTask;
- (id)surveyTask;
- (void)setSurveyTask:;
- (void).cxx_destruct;
+ (id)surveyTaskJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
