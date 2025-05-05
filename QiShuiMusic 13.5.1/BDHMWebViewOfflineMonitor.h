@interface BDHMWebViewOfflineMonitor : BDHybridBaseMonitor
+ (void)reportMainFrameResourceLoaderRecord:;
+ (BOOL)startMonitorWithClasses:setting:;
@end
