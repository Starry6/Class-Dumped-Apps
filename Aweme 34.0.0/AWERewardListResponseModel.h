@interface AWERewardListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray rewardModelList;
@property (nonatomic) q totalRewards;
@property (nonatomic) q payTotalAmount;
@property (nonatomic) q freeTotalAmount;
- (id)rewardModelList;
- (long long)totalRewards;
- (void)setTotalRewards:;
- (void)setRewardModelList:;
- (long long)payTotalAmount;
- (void)setPayTotalAmount:;
- (long long)freeTotalAmount;
- (void)setFreeTotalAmount:;
- (void).cxx_destruct;
+ (id)rewardModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
