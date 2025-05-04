@interface AWEQuestionnaireTaskModel : MTLModel
@property (nonatomic) NSNumber taskVersion;
@property (nonatomic) NSString taskID;
@property (nonatomic) NSNumber surveyType;
@property (nonatomic) AWEQuestionnaireConfig questionnaireConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)surveyType;
- (id)questionnaireConfig;
- (id)taskVersion;
- (void)setTaskVersion:;
- (void)setQuestionnaireConfig:;
- (void)setSurveyType:;
- (void).cxx_destruct;
- (void)setTaskID:;
- (id)taskID;
+ (id)questionnaireConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
