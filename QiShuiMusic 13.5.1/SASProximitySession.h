@interface SASProximitySession : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> actionQueue;
@property (nonatomic) SASProximitySessionTransport transport;
@property (nonatomic) <SASProximitySessionDelegate> delegate;
@property (nonatomic) CUMessageSession sharingMessageSession;
@property (nonatomic) BOOL connected;
- (id)transport;
- (void)setConnected:;
- (void)setTransport:;
- (id)init;
- (void)setDelegate:;
- (id)sendAction:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)invalidate;
- (void)activate;
- (id)actionQueue;
- (void)setActionQueue:;
- (void)handleAction:;
- (void)setSharingMessageSession:;
- (id)sharingMessageSession;
- (void)receivedAction:response:;
- (id)actionFromData:;
@end
