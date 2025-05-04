@interface AWESpecialRichAwemeLifeEvaluationInfoModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel evaluationLevel;
@property (nonatomic) NSString evaluationPrefix;
@property (nonatomic) NSString orderDesc;
- (void)setEvaluationLevel:;
- (id)evaluationPrefix;
- (void)setEvaluationPrefix:;
- (id)orderDesc;
- (void)setOrderDesc:;
- (void).cxx_destruct;
- (id)evaluationLevel;
+ (id)evaluationLevelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
