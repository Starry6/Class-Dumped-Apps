@interface AWEIMRecommendTaskCardDetailModel : AWEBaseApiModel
@property (nonatomic) NSString recommendTitle;
@property (nonatomic) NSString getAllJumpSchema;
@property (nonatomic) q showType;
@property (nonatomic) q missionSource;
@property (nonatomic) NSArray recommendMissionNormalInfo;
@property (nonatomic) NSArray recommendMissionIconInfo;
- (id)recommendTitle;
- (void)setRecommendTitle:;
- (long long)missionSource;
- (void)setMissionSource:;
- (id)getAllJumpSchema;
- (void)setGetAllJumpSchema:;
- (id)recommendMissionNormalInfo;
- (void)setRecommendMissionNormalInfo:;
- (id)recommendMissionIconInfo;
- (void)setRecommendMissionIconInfo:;
- (void).cxx_destruct;
- (void)setShowType:;
- (long long)showType;
+ (id)recommendMissionNormalInfoJSONTransformer;
+ (id)recommendMissionIconInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
