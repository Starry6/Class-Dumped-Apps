@interface HTSLiveKTVChallengeContent : IESLivePBBaseMessage
@property (nonatomic) q targetScore;
@property (nonatomic) q targetDurationSecond;
+ (id)descriptor;
@end
