@interface LaunchTaskInfo : IESLivePBBaseMessage
@property (nonatomic) q launchTaskId;
@property (nonatomic) NSString launchTaskIdStr;
@property (nonatomic) q launchTaskStatus;
@property (nonatomic) q hadLaunchCount;
@property (nonatomic) q lastLotteryId;
@property (nonatomic) LotteryRegularlyConfig regularlyConfig;
@property (nonatomic) BOOL hasRegularlyConfig;
+ (id)descriptor;
@end
