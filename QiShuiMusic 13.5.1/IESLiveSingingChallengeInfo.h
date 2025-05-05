@interface IESLiveSingingChallengeInfo : IESLivePBBaseMessage
@property (nonatomic) q switchStatus;
@property (nonatomic) q challengeId;
@property (nonatomic) BOOL isInSingingChallenge;
@property (nonatomic) q countdownSecond;
@property (nonatomic) q currentScore;
@property (nonatomic) q targetDurationSecond;
@property (nonatomic) q targetScore;
@property (nonatomic) NSInteger giftType;
@property (nonatomic) NSInteger emojiLocation;
@property (nonatomic) NSInteger ktvChallengeType;
@property (nonatomic) BOOL isSuccess;
+ (id)descriptor;
@end
