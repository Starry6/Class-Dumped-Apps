@interface MonitorInfo : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString hostAppID;
@property (nonatomic) NSString appVersion;
- (id)hostAppID;
- (id)init:deviceID:channel:hostAppID:appVersion:;
- (void)setHostAppID:;
- (void)setAppVersion:;
- (void)setChannel:;
- (id)appVersion;
- (id)channel;
- (void)setDeviceID:;
- (id)deviceID;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
@end
