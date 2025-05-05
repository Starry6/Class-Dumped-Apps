@interface BDHMBDWebKitCustomEventMonitor : NSObject
+ (void)reportToTea:params:;
+ (void)reportWithEventName:containerId:commonParams:metric:category:extra:aid:bid:containerBid:maySample:;
+ (BOOL)startMonitorWithClasses:setting:;
+ (void)webReportCustomWithEventName:bid:webView:metric:category:extra:timing:baseInfo:maySample:;
@end
