@interface PglMSManagerML : NSObject
- (void)reportForScene:;
- (id)setIDFA;
- (id)setMode;
- (void)OnDeviceIdAvailable:;
- (id)getFeatureHash:Body:;
- (id)getReportRaw:customInfo:mode:;
- (void)initToken;
- (id)initWithAppID:;
- (id)setBDDeviceID;
- (id)setChannel;
- (id)setCustomInfo;
- (id)setDeviceID;
- (id)setInstallID;
- (id)setSessionID;
- (id)versionInfo;
- (void)dealloc;
- (id)initWithConfig:;
- (id)getToken;
+ (id)get:;
@end
