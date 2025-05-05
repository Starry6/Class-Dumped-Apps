@interface BattleGetSettingsResponse : IESLivePBBaseMessage
@property (nonatomic) BattleGetSettingsResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
