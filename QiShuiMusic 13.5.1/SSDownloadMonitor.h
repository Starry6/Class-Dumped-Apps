@interface SSDownloadMonitor : NSObject
@property (nonatomic) <SSDownloadMonitorDelegate> delegate;
- (id)_connection;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)getMonitorItemsWithCompletionBlock:;
- (void)pauseMonitorItem:completionBlock:;
- (void)prioritizeMonitorItem:completionBlock:;
- (void)resumeMonitorItem:completionBlock:;
- (id)_copyItemsWithReply:error:;
- (void)_reloadForChangeNotification;
@end
