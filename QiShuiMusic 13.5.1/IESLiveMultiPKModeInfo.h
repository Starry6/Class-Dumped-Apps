@interface IESLiveMultiPKModeInfo : IESLivePBBaseMessage
@property (nonatomic) GPBStringInt64Dictionary mixUserIdToTeamId;
@property (nonatomic) BattleConfigSetting battleConfigModel;
@property (nonatomic) NSInteger modeTab;
@property (nonatomic) GPBStringInt64Dictionary openUserIdToTeamId;
@property (nonatomic) Q openUserIdToTeamId_Count;
@property (nonatomic) q version;
@property (nonatomic) NSInteger switchSource;
@property (nonatomic) NSString versionStr;
@property (nonatomic) NSString battleConfigSetting;
- (id)battleConfigModel;
- (id)mixUserIdToTeamId;
+ (id)descriptor;
@end
