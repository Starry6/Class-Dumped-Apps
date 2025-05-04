@interface AWEUserRewardAuthorInfo : AWEBaseApiModel
@property (nonatomic) Q rewardIMTab;
@property (nonatomic) q canReward;
- (long long)canReward;
- (unsigned long long)rewardIMTab;
- (void)setRewardIMTab:;
- (void)setCanReward:;
+ (id)JSONKeyPathsByPropertyKey;
@end
