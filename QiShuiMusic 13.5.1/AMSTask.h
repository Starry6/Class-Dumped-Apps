@interface AMSTask : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> performTaskQueue;
@property (nonatomic) AMSPromise promise;
@property (nonatomic) NSObject<OS_dispatch_queue> promiseAccessQueue;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL running;
@property (nonatomic) q runMode;
- (id)init;
- (BOOL)cancel;
- (long long)runMode;
- (BOOL)isCancelled;
- (BOOL)isRunning;
- (BOOL)isFinished;
- (id)promise;
- (void)setPromise:;
- (void).cxx_destruct;
- (id)performTaskWithBlock:;
- (id)performTaskWithPromiseBlock:;
- (id)performBinaryTaskWithBlock:;
- (void)setRunMode:;
- (id)performTaskQueue;
- (void)setPerformTaskQueue:;
- (id)promiseAccessQueue;
- (void)setPromiseAccessQueue:;
+ (id)taskCache;
+ (id)taskCacheAccessQueue;
@end
