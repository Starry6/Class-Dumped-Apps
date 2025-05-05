@interface BMComputeSourceClient : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSString streamIdentifier;
- (id)streamIdentifier;
- (id)init;
- (void)dealloc;
- (void)sendEvent:timestamp:signpostID:sendFullEvent:;
- (id)initWithStreamIdentifier:;
- (id)connection;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStreamIdentifier:listenerEndpoint:;
+ (id)new;
+ (void)setUseSynchronousXPCMessageSending:;
@end
