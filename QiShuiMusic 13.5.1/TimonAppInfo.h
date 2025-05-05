@interface TimonAppInfo : NSObject
@property (nonatomic) NSString appId;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString buildNumber;
@property (nonatomic) NSString deviceId;
@property (nonatomic) NSString versionCode;
- (void)setChannel:;
- (id)deviceId;
- (void)setDeviceId:;
- (id)appId;
- (id)channel;
- (id)userId;
- (void)setAppId:;
- (id)buildNumber;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setBuildNumber:;
- (id)versionCode;
- (void)setVersionCode:;
@end
