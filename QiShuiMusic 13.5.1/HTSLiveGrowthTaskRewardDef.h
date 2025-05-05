@interface HTSLiveGrowthTaskRewardDef : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger rewardType;
@property (nonatomic) NSInteger settleType;
@property (nonatomic) NSString target;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString operator_p;
@property (nonatomic) NSString sendParamStr;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString name;
+ (id)descriptor;
@end
