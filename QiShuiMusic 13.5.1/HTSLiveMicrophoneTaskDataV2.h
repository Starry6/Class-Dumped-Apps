@interface HTSLiveMicrophoneTaskDataV2 : IESLivePBBaseMessage
@property (nonatomic) q currentScore;
@property (nonatomic) q needScoreToNext;
@property (nonatomic) NSInteger orderSingStage;
+ (id)descriptor;
@end
