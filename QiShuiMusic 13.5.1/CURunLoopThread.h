@interface CURunLoopThread : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString label;
@property (nonatomic) @? threadInitializeHandler;
@property (nonatomic) @? threadFinalizeHandler;
- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)_threadMain;
- (void)performBlock:;
- (void)invalidate;
- (void)activate;
- (BOOL)_scheduleStopThread;
- (id)threadInitializeHandler;
- (void)setThreadInitializeHandler:;
- (id)threadFinalizeHandler;
- (void)setThreadFinalizeHandler:;
@end
