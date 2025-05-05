@interface ACCTransportClientBridge : NSObject
@property (nonatomic) ACCTransportClient transportClient;
@property (nonatomic) @? connectionAuthStatusChangedHandler;
@property (nonatomic) @? connectionPropertiesChangedHandler;
@property (nonatomic) @? endpointPropertiesChangedHandler;
@property (nonatomic) @? serverDisconnectedHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)transportClient:authStatusDidChange:forConnectionWithUUID:;
- (void)transportClient:propertiesDidChange:forConnectionWithUUID:previousProperties:;
- (void)transportClient:propertiesDidChange:forEndpointWithUUID:previousProperties:connectionUUID:;
- (void)transportClientServerDisconnected:;
- (id)transportClient;
- (void)setTransportClient:;
- (id)connectionAuthStatusChangedHandler;
- (void)setConnectionAuthStatusChangedHandler:;
- (id)connectionPropertiesChangedHandler;
- (void)setConnectionPropertiesChangedHandler:;
- (id)endpointPropertiesChangedHandler;
- (void)setEndpointPropertiesChangedHandler:;
- (id)serverDisconnectedHandler;
- (void)setServerDisconnectedHandler:;
+ (id)sharedBridge;
@end
