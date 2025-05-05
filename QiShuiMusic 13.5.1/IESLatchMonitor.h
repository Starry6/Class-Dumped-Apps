@interface IESLatchMonitor : NSObject
@property (nonatomic) NSMutableDictionary businessMonitorMap;
- (id)businessMonitorMap;
- (void)monitorLatchServiceWithTemplate:;
- (void)registerMonitor:forBusiness:;
- (void)reportCustomWithBusiness:containerId:EventName:url:lynxView:metric:category:extra:maySample:;
- (void)setBusinessMonitorMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedMonitor;
@end
