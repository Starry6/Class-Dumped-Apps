@interface AWETeenWebImageMonitor : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> teenWebImageMonitorQueue;
- (id)teenWebImageMonitorQueue;
- (void)trackTeenWebImageLoadWithImage:imageRequest:extraParams:;
- (void)setTeenWebImageMonitorQueue:;
- (void).cxx_destruct;
+ (id)settingsConfig;
+ (id)sharedInstance;
@end
