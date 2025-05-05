@interface AVDepartureAnnouncingObjectMonitor : NSObject
- (void)dealloc;
- (id)initWithMonitoringObject:;
+ (void)attachDepartureAnnouncingObjectMonitorToObject:monitoringObject:;
@end
