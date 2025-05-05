@interface IMDeviceConditions : NSObject
@property (nonatomic) BOOL isDeviceCharging;
@property (nonatomic) BOOL isDeviceOnWifi;
- (BOOL)isDeviceOnWifi;
- (id)_batteryStatus;
- (BOOL)isDeviceCharging;
- (id)_mobileNetworkManager;
+ (id)sharedInstance;
@end
