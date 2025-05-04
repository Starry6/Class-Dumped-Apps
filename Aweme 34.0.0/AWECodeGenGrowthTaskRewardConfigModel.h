@interface AWECodeGenGrowthTaskRewardConfigModel : AWEBaseDataModel
@property (nonatomic) q rewardAmount;
@property (nonatomic) NSString rewardUnit;
- (long long)rewardAmount;
- (void)setRewardAmount:;
- (id)rewardUnit;
- (void)setRewardUnit:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
