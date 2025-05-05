@interface IESMMObject : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> operationQueue;
- (id)initWithGCDName:;
- (void)runAsync:;
- (void)runAsyncAfter:block:;
- (void)runAsyncWhenInDifferentQueue:;
- (void)runSync:;
- (void)updateQueuePriority:;
- (id)init;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)setOperationQueue:;
@end
