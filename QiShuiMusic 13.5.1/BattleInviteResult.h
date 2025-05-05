@interface BattleInviteResult : IESLivePBBaseMessage
@property (nonatomic) BattleInviteResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
