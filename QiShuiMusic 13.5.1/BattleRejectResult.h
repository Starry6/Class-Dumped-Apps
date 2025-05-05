@interface BattleRejectResult : IESLivePBBaseMessage
@property (nonatomic) BattleRejectResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
