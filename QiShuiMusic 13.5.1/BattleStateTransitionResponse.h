@interface BattleStateTransitionResponse : IESLivePBBaseMessage
@property (nonatomic) BattleStateTransitionResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
