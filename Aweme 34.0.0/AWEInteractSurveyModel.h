@interface AWEInteractSurveyModel : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSString bizInfo;
@property (nonatomic) NSString surveyTitle;
@property (nonatomic) NSArray options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizInfo;
- (void)setBizInfo:;
- (id)surveyTitle;
- (void)setSurveyTitle:;
- (long long)type;
- (void)setOptions:;
- (void)setType:;
- (id)options;
- (void).cxx_destruct;
+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
