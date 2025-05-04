@interface AWEGeneralCommentConfigModel : AWEBaseApiModel
@property (nonatomic) AWECommentSurveyConfigModel commentSurveyConfig;
@property (nonatomic) q publishRetryInterval;
- (long long)publishRetryInterval;
- (id)commentSurveyConfig;
- (void)setCommentSurveyConfig:;
- (void)setPublishRetryInterval:;
- (void).cxx_destruct;
+ (id)commentSurveyConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
