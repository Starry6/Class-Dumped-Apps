@interface IESLiveWebViewOfflineMonitor : NSObject
+ (id)fetchRecordForUrlStr:;
+ (void)startMonitorWithClasses:setting:;
@end
