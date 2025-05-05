@interface VmsdkMonitor : NSObject
- (void)monitorEvent:metric:category:extra:;
+ (id)sharedOnlyAppID;
+ (id)getMonitor;
+ (void)monitorEventStatic:metric:category:extra:;
+ (id)sharedMonitorInfo:;
@end
