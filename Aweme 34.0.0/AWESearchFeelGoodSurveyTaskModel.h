@interface AWESearchFeelGoodSurveyTaskModel : AWEBaseApiModel
@property (nonatomic) NSNumber surveyType;
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString taskName;
@property (nonatomic) NSNumber taskStatus;
@property (nonatomic) NSNumber taskVersion;
@property (nonatomic) AWESearchFeelGoodSurveyFormModel formConfig;
@property (nonatomic) NSNumber surveyDelay;
@property (nonatomic) AWESearchFeelGoodSurveyCommonModel commonConfig;
- (id)surveyType;
- (void)setTaskStatus:;
- (void)setCommonConfig:;
- (id)commonConfig;
- (id)taskVersion;
- (void)setTaskVersion:;
- (void)setFormConfig:;
- (void)setSurveyDelay:;
- (id)formConfig;
- (id)surveyDelay;
- (void)setSurveyType:;
- (void)setTaskName:;
- (id)taskName;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
- (id)taskStatus;
+ (id)formConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
