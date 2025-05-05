@interface IESLiveScoreGapChallengeDetails : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) q durationSec;
@property (nonatomic) q startTimeSec;
@property (nonatomic) q endTimeSec;
@property (nonatomic) q finishTimeSec;
@property (nonatomic) NSMutableArray teamInfosArray;
@property (nonatomic) Q teamInfosArray_Count;
@property (nonatomic) q challengeThreshold;
@property (nonatomic) q teamfightId;
@property (nonatomic) IESLiveScoreGapChallengeBonusInfo bonusInfo;
@property (nonatomic) BOOL hasBonusInfo;
@property (nonatomic) GPBInt64Int64Dictionary challengeThresholdMap;
@property (nonatomic) Q challengeThresholdMap_Count;
+ (id)descriptor;
@end
