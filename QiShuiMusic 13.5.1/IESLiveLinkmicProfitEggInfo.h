@interface IESLiveLinkmicProfitEggInfo : IESLivePBBaseMessage
@property (nonatomic) NSString eggId;
@property (nonatomic) NSInteger eggType;
@property (nonatomic) NSInteger status;
@property (nonatomic) IESLiveLinkmicProfitEggTaskInfo taskInfo;
@property (nonatomic) BOOL hasTaskInfo;
@property (nonatomic) IESLiveLinkmicProfitEggRewardInfo rewardInfo;
@property (nonatomic) BOOL hasRewardInfo;
+ (id)descriptor;
@end
