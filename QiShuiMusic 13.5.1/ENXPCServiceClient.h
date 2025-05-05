@interface ENXPCServiceClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) NSObject<OS_xpc_object> testListenerEndpoint;
- (void)setTestListenerEndpoint:;
- (id)init;
- (id)testListenerEndpoint;
- (void)dealloc;
- (id)dispatchQueue;
- (void)_xpcReceivedEvent:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidateForced:;
- (id)getXPCConnectionAndReturnError:;
- (id)_ensureXPCStartedAndReturnError:;
@end
