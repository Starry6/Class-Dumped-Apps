@interface HCXPCClient : NSObject
@property (nonatomic) NSObject<OS_xpc_object> xpcConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> xpcQueue;
@property (nonatomic) Q requestedUpdates;
- (void)dealloc;
- (id)xpcQueue;
- (void)setXpcConnection:;
- (void)setXpcQueue:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)description;
- (void)teardownConnection;
- (id)initWithConnection:;
- (void)setWantsUpdates:forIdentifier:;
- (BOOL)wantsUpdatesForIdentifier:;
- (BOOL)sendMessage:errorBlock:;
- (unsigned long long)requestedUpdates;
- (void)setRequestedUpdates:;
+ (id)clientWithConnection:;
@end
