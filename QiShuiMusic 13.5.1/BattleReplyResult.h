@interface BattleReplyResult : IESLivePBBaseMessage
@property (nonatomic) BattleReplyResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
