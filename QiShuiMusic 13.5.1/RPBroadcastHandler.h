@interface RPBroadcastHandler : NSObject
@property (nonatomic) NSDictionary serviceInfo;
@property (nonatomic) NSExtensionContext extensionContext;
@property (nonatomic) NSXPCListenerEndpoint listenerEndpoint;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)serviceInfo;
- (void)setListenerEndpoint:;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)listenerEndpoint;
- (id)extensionContext;
- (void)setListener:;
- (void)beginRequestWithExtensionContext:;
- (void)setExtensionContext:;
- (void)setServiceInfo:;
- (void)_completeRequestWithReturnItems:;
- (void)updateServiceInfo:;
- (void)updateBroadcastURL:;
@end
