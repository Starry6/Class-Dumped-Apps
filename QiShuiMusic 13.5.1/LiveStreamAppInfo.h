@interface LiveStreamAppInfo : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString deviceId;
- (void)setAppVersion:;
- (id)appVersion;
- (id)deviceId;
- (void)setDeviceId:;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
@end
