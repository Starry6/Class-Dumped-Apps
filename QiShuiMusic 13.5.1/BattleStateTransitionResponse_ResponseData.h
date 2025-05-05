@interface BattleStateTransitionResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveBattleStateSyncMessage stateInfo;
@property (nonatomic) BOOL hasStateInfo;
+ (id)descriptor;
@end
