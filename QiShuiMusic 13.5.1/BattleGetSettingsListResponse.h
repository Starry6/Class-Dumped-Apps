@interface BattleGetSettingsListResponse : IESLivePBBaseMessage
@property (nonatomic) BattleGetSettingsListResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
