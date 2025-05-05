@interface HTSLiveGoalStageDetail : IESLivePBBaseMessage
@property (nonatomic) NSString firstHalfGoal;
@property (nonatomic) NSString secondHalfGoal;
@property (nonatomic) NSString overtime;
@property (nonatomic) NSString shots;
@property (nonatomic) NSString total;
+ (id)descriptor;
@end
