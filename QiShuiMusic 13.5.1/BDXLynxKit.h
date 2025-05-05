@interface BDXLynxKit : NSObject
@property (nonatomic) HMDTTMonitor sdkMonitor;
@property (nonatomic) NSDictionary sdkMonitorConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initLogObserver;
- (id)createViewWithFrame:;
- (id)createViewWithFrame:params:;
- (void)enableSDKMonitorWithDeviceID:channel:;
- (void)initLynxKit;
- (void)prefetchResourceWithURLs:;
- (id)sdkMonitor;
- (id)sdkMonitorConfig;
- (void)setSdkMonitor:;
- (void)setSdkMonitorConfig:;
- (void).cxx_destruct;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (unsigned long long)serviceType;
@end
