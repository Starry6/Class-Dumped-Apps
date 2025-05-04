@interface AWECloudCommandParamModel : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString deviceId;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString appBuildVersion;
- (id)appBuildVersion;
- (void)setAppBuildVersion:;
- (id)deviceId;
- (id)init;
- (id)userId;
- (void)setDeviceId:;
- (id)appID;
- (void)setAppID:;
- (void).cxx_destruct;
- (void)setUserId:;
@end
