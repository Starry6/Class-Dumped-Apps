@interface CUSleepWakeMonitor : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString label;
@property (nonatomic) @? sleepWakeHandler;
- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (id)dispatchQueue;
- (void)_ensureStopped;
- (void)setDispatchQueue:;
- (void)_sleepWakeHandlerForService:type:arg:;
- (void)setLabel:;
- (id)label;
- (void)setSleepWakeHandler:;
- (void)_ensureStarted;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (id)sleepWakeHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
@end
