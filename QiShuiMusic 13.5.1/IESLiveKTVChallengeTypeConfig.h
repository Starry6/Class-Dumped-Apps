@interface IESLiveKTVChallengeTypeConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger ktvChallengeType;
@property (nonatomic) q lowerScoreLimit;
@property (nonatomic) q upperScoreLimit;
@property (nonatomic) GPBInt64Array challengeScoreListArray;
@property (nonatomic) Q challengeScoreListArray_Count;
+ (id)descriptor;
@end
