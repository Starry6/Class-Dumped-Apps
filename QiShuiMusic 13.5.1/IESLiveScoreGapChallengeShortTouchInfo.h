@interface IESLiveScoreGapChallengeShortTouchInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) q progressRatio;
@property (nonatomic) q endTimeSec;
@property (nonatomic) q challengeThreshold;
@property (nonatomic) q teamfightOngoingTime;
@property (nonatomic) q teamfightId;
+ (id)descriptor;
@end
