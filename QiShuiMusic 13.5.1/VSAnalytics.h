@interface VSAnalytics : NSObject
+ (void)reportEvent:payload:;
+ (void)reportInstrumentMetrics:;
+ (void)reportDownloadMetrics:;
@end
