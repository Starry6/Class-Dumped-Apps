@interface BDDetailContentPreloader : NSObject
@property (nonatomic) NSMutableArray httpTaskArray;
- (void)suspendAllTasks;
- (void)cancelTasksWithTemplateKey:;
- (id)httpTaskArray;
- (BOOL)needRequest:;
- (void)preloadDetailDataWithTask:;
- (void)preloadDetailDataWithTask:retryCount:;
- (void)preloadDetailDataWithTasks:;
- (void)resumeAllTasks;
- (void)setHttpTaskArray:;
- (void)cancelTask:;
- (void).cxx_destruct;
- (void)cancelAllTasks;
+ (id)sharedInstance;
@end
