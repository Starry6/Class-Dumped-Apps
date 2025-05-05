@interface MSClientSidePauseContext : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> timerQueue;
@property (nonatomic) NSXPCConnection server;
@property (nonatomic) MSTimerGate gate;
- (id)initWithServer:;
- (id)server;
- (void)setServer:;
- (void)resume;
- (id)timerQueue;
- (void).cxx_destruct;
- (id)gate;
- (void)setGate:;
- (void)setTimerQueue:;
- (void)timerQueueTimerFired;
- (void)timerQueuePing;
@end
