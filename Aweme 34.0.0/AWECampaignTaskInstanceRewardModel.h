@interface AWECampaignTaskInstanceRewardModel : MTLModel
@property (nonatomic) q rewardType;
@property (nonatomic) q rewardAmount;
@property (nonatomic) NSString rewardID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)rewardAmount;
- (void)setRewardAmount:;
- (void)setRewardType:;
- (long long)rewardType;
- (id)rewardID;
- (void)setRewardID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
