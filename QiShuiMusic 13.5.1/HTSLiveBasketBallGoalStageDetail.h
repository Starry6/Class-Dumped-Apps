@interface HTSLiveBasketBallGoalStageDetail : IESLivePBBaseMessage
@property (nonatomic) NSInteger firstPeriod;
@property (nonatomic) NSInteger secondPeriod;
@property (nonatomic) NSInteger thirdPeriod;
@property (nonatomic) NSInteger forthPeriod;
@property (nonatomic) NSInteger overtime;
@property (nonatomic) NSInteger total;
+ (id)descriptor;
@end
