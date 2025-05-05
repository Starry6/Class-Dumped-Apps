@interface IESECCommentSurveyModelV2 : MTLModel
@property (nonatomic) q surveyId;
@property (nonatomic) NSString surveyTitle;
@property (nonatomic) NSString surveyUrl;
@property (nonatomic) NSArray options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSurveyTitle:;
- (void)setSurveyId:;
- (void)setSurveyUrl:;
- (long long)surveyId;
- (id)surveyTitle;
- (id)surveyUrl;
- (void)setOptions:;
- (id)options;
- (void).cxx_destruct;
+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
