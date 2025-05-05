@interface MSManagerML : NSObject
- (void)reportForScene:;
- (id)setIDFA;
- (id)setMode;
- (void)appDidEnterForeground:;
- (void)collectFgbgdata:time:;
- (id)getFeatureHash:Body:;
- (id)getReportRaw:customInfo:mode:;
- (id)initWithAppID:;
- (id)isGameType;
- (void)musicWithGame;
- (void)postEventMessage:;
- (int)registerScenePageNameCallback:cb:;
- (id)setBDDeviceID;
- (id)setChannel;
- (id)setCustomInfo;
- (id)setDeviceID;
- (id)setInstallID;
- (id)setMsSettingConfig;
- (id)setSessionID;
- (id)whoisGame:withType:;
- (id)versionInfo;
- (void)dealloc;
- (void)appDidEnterBackground:;
- (id)initWithConfig:;
+ (id)get:;
@end
