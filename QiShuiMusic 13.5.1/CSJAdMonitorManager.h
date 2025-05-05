@interface CSJAdMonitorManager : NSObject
@property (nonatomic) CSJExpressAdMonitor expressAdMonitor;
@property (nonatomic) CSJUserMonitor userMonitor;
@property (nonatomic) CSJSDKMonitor sdkMonitor;
- (void)setUserMonitor:;
- (id)expressAdMonitor;
- (id)sdkMonitor;
- (void)setExpressAdMonitor:;
- (void)setSdkMonitor:;
- (id)userMonitor;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
