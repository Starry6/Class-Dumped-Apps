@interface AWELiveLinkMicModel : NSObject
@property (nonatomic) AWELiveLinkMicBattleSettingModel battleSettings;
@property (nonatomic) q channelID;
@property (nonatomic) q anchorConnectCount;
- (id)battleSettings;
- (long long)anchorConnectCount;
- (void)setBattleSettings:;
- (void)setAnchorConnectCount:;
- (void)setChannelID:;
- (long long)channelID;
- (void).cxx_destruct;
@end
