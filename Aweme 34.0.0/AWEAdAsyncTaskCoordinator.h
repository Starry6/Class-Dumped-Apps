@interface AWEAdAsyncTaskCoordinator : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> taskSemaphore;
- (id)taskSemaphore;
- (void)asyncTaskRunning;
- (void)asyncTaskEnd;
- (void)setTaskSemaphore:;
- (id)init;
- (void).cxx_destruct;
+ (id)queue;
@end
