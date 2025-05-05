@interface SecKeyProxy : NSObject
@property (nonatomic) NSXPCListenerEndpoint endpoint;
@property (nonatomic) @? clientConnectionHandler;
@property (nonatomic) @? clientDisconnectionHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)initWithIdentity:;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)endpoint;
- (void)invalidate;
- (void)setClientDisconnectionHandler:;
- (id)initWithKey:certificate:;
- (id)clientConnectionHandler;
- (void)setClientConnectionHandler:;
- (id)clientDisconnectionHandler;
+ (id)targetForKey:error:;
+ (id)createItemFromEndpoint:certificate:error:;
+ (id)createKeyFromEndpoint:error:;
+ (id)createIdentityFromEndpoint:error:;
@end
