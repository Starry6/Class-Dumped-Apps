@interface AWECommentSurveyConfigModel : AWEBaseApiModel
@property (nonatomic) NSString surveyId;
@property (nonatomic) Q surveyType;
@property (nonatomic) q surveyIndex;
@property (nonatomic) q stayDuration;
@property (nonatomic) NSString surveyDetail;
@property (nonatomic) NSString schema;
- (long long)stayDuration;
- (unsigned long long)surveyType;
- (id)surveyDetail;
- (long long)surveyIndex;
- (void)setStayDuration:;
- (void)setSurveyIndex:;
- (void)setSurveyDetail:;
- (void)setSurveyType:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setSurveyId:;
- (id)surveyId;
+ (id)JSONKeyPathsByPropertyKey;
@end
