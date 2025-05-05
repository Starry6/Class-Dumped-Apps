@interface BDHMSDKMonitorManager : NSObject
@property (nonatomic) HMDTTMonitor sdkMonitor;
- (id)sdkMonitor;
- (void)setSdkMonitor:;
- (void)startSDKMonitorWithHostAppID:deviceID:channel:;
- (void)trackService:metric:category:;
- (void).cxx_destruct;
+ (id)shared;
@end
