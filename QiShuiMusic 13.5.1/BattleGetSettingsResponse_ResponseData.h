@interface BattleGetSettingsResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) IESLiveBattleUserSettings settings;
@property (nonatomic) BOOL hasSettings;
@property (nonatomic) PrecisionMatchSettings precisionMatchSettings;
@property (nonatomic) BOOL hasPrecisionMatchSettings;
+ (id)descriptor;
@end
