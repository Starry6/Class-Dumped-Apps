@interface AWEIMMonitorManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_trackService:status:extra:;
- (BOOL)msgDBTraceMainThread;
- (BOOL)shouldTrackLaunchIO;
- (void)iesim_trackData:logTypeStr:;
- (void)iesim_trackService:attributes:;
- (void)iesim_trackService:value:extra:;
- (void)iesim_doubleTrackEvent:status:params:;
- (void)iesim_applogTrackEvent:params:;
- (void)iesim_trackThreadLogWithType:parameter:callback:;
- (void)iesim_monitorTrackService:status:params:;
- (void)iesim_traceThreadWithScene:params:;
- (BOOL)iesim_shouldTrackEvent:;
- (void)iesim_dbMark:launchTime:cmdID:;
- (void)iesim_dbMark:beginTime:;
@end
