@interface BattleCancelMatchResult : IESLivePBBaseMessage
@property (nonatomic) BattleCancelMatchResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
