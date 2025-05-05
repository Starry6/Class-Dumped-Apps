@interface RPRemoteXPCConnection : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) RPEndpoint endpoint;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)init;
- (id)interruptionHandler;
- (void)_invalidated;
- (void)setInterruptionHandler:;
- (id)dispatchQueue;
- (void)_activateWithCompletion:;
- (id)serviceName;
- (void)setEndpoint:;
- (void)setDispatchQueue:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (id)endpoint;
- (void)setInvalidationHandler:;
- (void)invalidate;
@end
