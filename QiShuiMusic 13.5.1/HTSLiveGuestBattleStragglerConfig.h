@interface HTSLiveGuestBattleStragglerConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGuestBattleGradeConfig gradeConfig;
@property (nonatomic) BOOL hasGradeConfig;
+ (id)descriptor;
@end
