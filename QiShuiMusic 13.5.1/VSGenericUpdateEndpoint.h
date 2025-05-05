@interface VSGenericUpdateEndpoint : NSObject
@property (nonatomic) NSXPCListenerEndpoint endpoint;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) @? handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setHandler:;
- (void)setEndpoint:;
- (id)initWithCoder:;
- (id)listener;
- (void)encodeWithCoder:;
- (id)handler;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)endpoint;
- (void)setQueue:;
- (void)setListener:;
- (id)queue;
- (void)invalidate;
+ (BOOL)supportsSecureCoding;
+ (id)configuredEndpointWithUpdateHandler:withConnection:;
+ (id)remoteUpdateHanderForEndpoint:;
@end
