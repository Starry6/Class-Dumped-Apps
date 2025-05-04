@interface AWEQuestionnaireDataModel : MTLModel
@property (nonatomic) NSString feelGoodToken;
@property (nonatomic) AWEQuestionnaireTaskModel surveyTask;
@property (nonatomic) AWEQuestionnaireExtraInfo extraInfo;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)surveyTask;
- (id)feelGoodToken;
- (void)setFeelGoodToken:;
- (void)setSurveyTask:;
- (void)setUserInfo:;
- (id)userInfo;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)extraInfoJSONTransformer;
+ (id)surveyTaskJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
