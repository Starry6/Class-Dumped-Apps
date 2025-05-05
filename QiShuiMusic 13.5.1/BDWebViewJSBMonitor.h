@interface BDWebViewJSBMonitor : BDHybridBaseMonitor
+ (void)reportJSBPVInWebView:withInfos:;
+ (void)reportJSBErrorInWebView:withModel:;
+ (void)reportJSBFetchErrorInWebView:withModel:;
+ (void)reportJSBPerfInWebView:withModel:;
+ (void)reportJSBPerfV2InWebView:withInfos:;
+ (BOOL)startMonitorWithClasses:setting:;
@end
