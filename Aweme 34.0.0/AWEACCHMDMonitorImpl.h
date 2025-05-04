@interface AWEACCHMDMonitorImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackData:logTypeStr:;
+ (void)trackService:status:extra:;
+ (double)timeIntervalForKey:;
+ (void)cancelTimingForKey:;
+ (BOOL)endTimingForKey:service:label:;
+ (BOOL)endTimingForKey:service:label:duration:;
+ (void)trackService:attributes:;
+ (id)timingSemaphore;
+ (BOOL)p_disableTrackService;
+ (void)p_willMonitor:params:;
+ (id)p_DNS;
+ (void)postInfoForPerformanceCheckWithParams:;
+ (void)trackService:floatValue:extra:;
+ (void)trackService:status:extra:extraParamsOption:;
+ (void)startTimingForKey:;
+ (id)timingDict;
@end
