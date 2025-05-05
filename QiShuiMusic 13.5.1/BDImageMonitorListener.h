@interface BDImageMonitorListener : NSObject
+ (id)registerMonitorCallback:;
+ (void)unregisterMonitorCallback:;
@end
