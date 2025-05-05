@interface TTNetForegroundRequestSender : NSObject
@property (nonatomic) NSMutableArray waitingQueue;
@property (nonatomic) NSLock queueLock;
- (void)releaseAllTasks;
- (void)setWaitingQueue:;
- (id)waitingQueue;
- (void)addTask:;
- (id)init;
- (void).cxx_destruct;
- (id)queueLock;
- (void)setQueueLock:;
+ (id)shareInstance;
@end
