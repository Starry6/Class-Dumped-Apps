@interface IESLiveRevenueInteractBattleConfig : NSObject
@property (nonatomic) BattleConfigSetting battleConfigSetting;
@property (nonatomic) NSNumber duration;
@property (nonatomic) Q multiPKMode;
@property (nonatomic) NSInteger inviteType;
@property (nonatomic) NSString clientAttachedInfo;
@property (nonatomic) NSString switchSceneGameId;
- (void)setMultiPKMode:;
- (id)battleConfigSetting;
- (id)clientAttachedInfo;
- (id)initWithBattleConfigSetting:;
- (int)inviteType;
- (id)logParams;
- (unsigned long long)multiPKMode;
- (void)setBattleConfigSetting:;
- (void)setClientAttachedInfo:;
- (void)setInviteType:;
- (void)setSwitchSceneGameId:;
- (id)switchSceneGameId;
- (id)init;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)duration;
@end
