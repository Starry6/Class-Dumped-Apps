@interface BattleCancelInviteResponse : IESLivePBBaseMessage
@property (nonatomic) BattleCancelInviteResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
