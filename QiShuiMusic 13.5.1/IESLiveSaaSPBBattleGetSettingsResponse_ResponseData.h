@interface IESLiveSaaSPBBattleGetSettingsResponse_ResponseData : GPBMessage
@property (nonatomic) IESLiveSaaSPBBattleUserSettings settings;
@property (nonatomic) BOOL hasSettings;
@property (nonatomic) IESLiveSaaSPBPrecisionMatchSettings precisionMatchSettings;
@property (nonatomic) BOOL hasPrecisionMatchSettings;
+ (id)descriptor;
@end
