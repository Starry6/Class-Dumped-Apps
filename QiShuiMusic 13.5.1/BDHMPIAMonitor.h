@interface BDHMPIAMonitor : NSObject
+ (void)fetchAndReportWithPerfDict:forEvent:andParams:;
+ (id)getJsContextData:;
+ (id)handleContainerInfoToMetrics:;
+ (void)handlePIAEvent:webview:category:metrics:;
+ (void)reportToSlardar:webview:category:metrics:;
+ (void)reportToTEA:webview:params:;
@end
