@interface AFCoreAnalyticsLoggingService : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)logToCoreAnalyticsCrossDeviceRequestEvent:;
+ (id)sharedLoggingService;
@end
