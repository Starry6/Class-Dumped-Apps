@interface BDLynxJSBMonitor : BDHybridBaseMonitor
+ (void)reportJSBErrorInLynxView:withModel:;
+ (void)reportJSBFetchErrorInLynxView:withModel:;
+ (void)reportJSBPerfInLynxView:withModel:;
+ (void)reportJSBPerfV2InLynxView:withInfos:;
+ (BOOL)startMonitorWithSetting:;
@end
