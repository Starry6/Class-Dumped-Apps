@interface BattleFinishResult : IESLivePBBaseMessage
@property (nonatomic) BattleFinishResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
