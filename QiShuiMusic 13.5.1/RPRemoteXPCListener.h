@interface RPRemoteXPCListener : NSObject
@property (nonatomic) @? acceptHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString serviceName;
- (id)init;
- (id)interruptionHandler;
- (void)_invalidated;
- (void)setInterruptionHandler:;
- (id)dispatchQueue;
- (void)_activateWithCompletion:;
- (id)serviceName;
- (void)setDispatchQueue:;
- (void)setAcceptHandler:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)acceptHandler;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
@end
