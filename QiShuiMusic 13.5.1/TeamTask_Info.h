@interface TeamTask_Info : IESLivePBBaseMessage
@property (nonatomic) q targetUserCount;
@property (nonatomic) q finishUserCount;
@property (nonatomic) NSInteger result;
@property (nonatomic) TeamTask_Reward reward;
@property (nonatomic) BOOL hasReward;
@property (nonatomic) q ratio;
@property (nonatomic) NSInteger role;
@property (nonatomic) ItemCardInfo itemCardInfo;
@property (nonatomic) BOOL hasItemCardInfo;
@property (nonatomic) NSString valueText;
@property (nonatomic) NSString progressBlurText;
+ (id)descriptor;
@end
