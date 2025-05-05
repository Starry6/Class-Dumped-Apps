@interface BattleGetSettingsListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) IESLiveBattleUserSettingsList list;
@property (nonatomic) BOOL hasList;
+ (id)descriptor;
@end
