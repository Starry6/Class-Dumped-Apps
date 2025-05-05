@interface HTSLiveGrowthTaskReward : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGrowthTaskRewardDef def;
@property (nonatomic) BOOL hasDef;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString extra;
@property (nonatomic) q remainingCount;
+ (id)descriptor;
@end
