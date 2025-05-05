@interface BU_IESGurdLogger : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> trackEventQueue;
@property (nonatomic) NSMutableArray paramsArray;
- (id)trackEventQueue;
- (void)setParamsArray:;
- (void)innerSendStatsIfNeeded;
- (id)paramsArray;
- (void)setTrackEventQueue:;
- (void)setupNotification;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)appLogDelegate;
+ (BOOL)isAppLogEnable;
+ (void)recordNetworkWithParams:networkResponse:;
+ (void)recordStatsWithType:status:accessKey:channel:packageID:extra:;
+ (void)sendStatsIfNeeded;
+ (id)sendStatsTimer;
+ (void)sendStatsWithPackageParams:;
+ (void)setAppLogDelegate:;
+ (void)setSendStatsTimer:;
+ (void)setShouldReportParams:;
+ (BOOL)shouldReportParams;
+ (void)trackEvent:params:;
+ (id)sharedLogger;
+ (void)createTimerIfNeeded;
@end
