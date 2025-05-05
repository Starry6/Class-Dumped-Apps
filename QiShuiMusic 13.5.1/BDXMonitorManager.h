@interface BDXMonitorManager : NSObject
@property (nonatomic) NSDictionary globalMonitorMap;
- (BOOL)bindMonitor:sessionId:;
- (void)collectCardStartWithSessionId:timeStamp:;
- (void)destoryMonitorWithSessionId:;
- (id)fetchMonitorWithSessionId:;
- (id)getDurationForMonitor:startTimeField:endTimeField:;
- (id)globalMonitorMap;
- (void)setGlobalMonitorMap:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
