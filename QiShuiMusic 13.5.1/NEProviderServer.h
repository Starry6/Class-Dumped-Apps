@interface NEProviderServer : NSObject
@property (nonatomic) NEExtensionProviderContext firstContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)start;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)generateProviderEndpointInfoInMessage:extensionPoint:;
- (id)firstContext;
- (void)removeProviderContext:;
+ (id)sharedServer;
@end
