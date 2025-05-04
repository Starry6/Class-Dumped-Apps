@interface AWERewardListDataController : AWEListDataController
@property (nonatomic) NSString awemeID;
@property (nonatomic) q count;
@property (nonatomic) NSArray rewardModelList;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) q totalRewards;
@property (nonatomic) NSArray insertRewarderIDs;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)loadMoreWithCompletion:;
- (void)setAwemeID:;
- (void)setInsertRewarderIDs:;
- (id)insertRewarderIDs;
- (id)initWithAwemeModel:;
- (id)awemeID;
- (BOOL)isEmptyData;
- (id)rewardModelList;
- (id)__requestURL;
- (id)__getParams;
- (long long)totalRewards;
- (void)setTotalRewards:;
- (void)setRewardModelList:;
- (id)__paramStringFromStringArray:;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
