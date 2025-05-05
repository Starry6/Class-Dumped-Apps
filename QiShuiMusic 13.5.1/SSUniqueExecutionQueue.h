@interface SSUniqueExecutionQueue : NSObject
@property (nonatomic) @? block;
@property (nonatomic) NSObject<OS_dispatch_queue> callBlockQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> executeBlockQueue;
@property (nonatomic) SSPromise promise;
@property (nonatomic) NSObject<OS_dispatch_queue> promiseAccessQueue;
- (id)block;
- (void)addCompletionBlock:;
- (id)initWithBlock:;
- (id)promise;
- (void)setPromise:;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)promiseAccessQueue;
- (id)executeBlockQueue;
- (void)setExecuteBlockQueue:;
- (id)callBlockQueue;
- (void)setCallBlockQueue:;
@end
