@interface TrialLiveInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL enableTrialLive;
@property (nonatomic) q totalTimes;
@property (nonatomic) q currentTimes;
@property (nonatomic) q remainTimes;
@property (nonatomic) NSString prompts;
+ (id)descriptor;
@end
