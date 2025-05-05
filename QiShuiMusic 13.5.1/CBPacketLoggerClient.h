@interface CBPacketLoggerClient : NSObject
@property (nonatomic) @? rawPacketHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @? errorHandler;
@property (nonatomic) @? interruptionHandler;
- (id)init;
- (id)interruptionHandler;
- (id)errorHandler;
- (void)_invalidated;
- (void)setInterruptionHandler:;
- (id)dispatchQueue;
- (void)_activateWithCompletion:;
- (void)setDispatchQueue:;
- (void)_xpcReceivedEvent:;
- (void)_interrupted;
- (void)setErrorHandler:;
- (id)_ensureXPCStarted;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (void)_activateXPC:completion:;
- (void)_xpcReceivedPacket:;
- (id)rawPacketHandler;
- (void)setRawPacketHandler:;
@end
