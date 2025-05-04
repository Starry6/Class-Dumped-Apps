@interface AWEWeekendRewardMessageModel : AWEBaseApiModel
@property (nonatomic) q rewardNum;
@property (nonatomic) NSString rewardType;
@property (nonatomic) NSString rewardTag;
- (void)setRewardType:;
- (id)rewardType;
- (long long)rewardNum;
- (void)setRewardNum:;
- (id)rewardTag;
- (void)setRewardTag:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
