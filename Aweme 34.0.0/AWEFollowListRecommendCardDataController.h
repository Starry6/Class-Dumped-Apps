@interface AWEFollowListRecommendCardDataController : AWEListDataController
@property (nonatomic) NSMutableArray cardModels;
- (id)cardModels;
- (void)setCardModels:;
- (id)paramsForNetworkService;
- (id)modelTransform:;
- (id)formatedLimitNumberString:uid:;
- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
