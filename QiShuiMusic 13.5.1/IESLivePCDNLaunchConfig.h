@interface IESLivePCDNLaunchConfig : NSObject
@property (nonatomic) NSNumber businessId;
@property (nonatomic) NSString deviceId;
- (id)deviceId;
- (void)setDeviceId:;
- (id)businessId;
- (void).cxx_destruct;
- (void)setBusinessId:;
+ (id)defaultConfig;
@end
