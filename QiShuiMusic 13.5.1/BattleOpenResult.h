@interface BattleOpenResult : IESLivePBBaseMessage
@property (nonatomic) BattleOpenResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
