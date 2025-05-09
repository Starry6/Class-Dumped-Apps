@interface ACCTransportClient : NSObject
@property (nonatomic) NSXPCConnection serverConnection;
@property (nonatomic) NSMutableDictionary endpointDataOutHandlers;
@property (nonatomic) NSMutableDictionary connectionPropertyChangeHandlers;
@property (nonatomic) NSMutableDictionary endpointPropertyChangeHandlers;
@property (nonatomic) NSObject<OS_dispatch_queue> endpointEventHandlerQueue;
@property (nonatomic) <ACCTransportClientDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setServerConnection:;
- (id)serverConnection;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)_init;
- (void)connectToServer;
- (void)propertiesDidChange:forConnectionWithUUID:previousProperties:;
- (void)propertiesDidChange:forEndpointWithUUID:previousProperties:connectionUUID:;
- (id)createConnectionWithType:andIdentifier:;
- (BOOL)setProperties:forConnectionWithUUID:;
- (BOOL)setAccessoryInfo:forEndpointWithUUID:;
- (BOOL)setProperties:forEndpointWithUUID:;
- (BOOL)publishConnectionWithUUID:;
- (BOOL)destroyEndpointWithUUID:;
- (BOOL)destroyConnectionWithUUID:;
- (id)connectionUUIDForEndpointWithUUID:;
- (id)endpointUUIDsForConnectionWithUUID:;
- (int)authStatusForConnectionWithUUID:authType:;
- (id)identifierForConnectionWithUUID:;
- (id)identifierForEndpointWithUUID:;
- (id)propertiesForConnectionWithUUID:;
- (id)propertiesForEndpointWithUUID:;
- (BOOL)processIncomingData:forEndpointWithUUID:;
- (void)setHandler:forConnectionProperty:;
- (void)setHandler:forEndpointProperty:;
- (id)connectionPropertyChangeHandlers;
- (void)setConnectionPropertyChangeHandlers:;
- (id)endpointPropertyChangeHandlers;
- (void)setEndpointPropertyChangeHandlers:;
- (void)launchServer;
- (void)setConnectionAuthenticated:state:;
- (void)sendOutgoingData:forEndpointWithUUID:connectionUUID:withReply:;
- (void)authStateDidChange:forConnectionWithUUID:previousAuthState:authType:connectionIsAuthenticated:connectionWasAuthenticated:;
- (BOOL)setProperty:value:forConnectionWithUUID:;
- (BOOL)removeProperty:forConnectionWithUUID:;
- (id)createEndpointWithTransportType:andProtocol:andIdentifier:andDataOutHandler:forConnectionWithUUID:publishConnection:;
- (BOOL)setProperty:value:forEndpointWithUUID:;
- (BOOL)removeProperty:forEndpointWithUUID:;
- (BOOL)isConnectionAuthenticated:;
- (id)accessoryInfoForConnectionWithUUID:;
- (id)accessoryInfoForEndpointWithUUID:;
- (id)endpointDataOutHandlers;
- (void)setEndpointDataOutHandlers:;
- (id)endpointEventHandlerQueue;
- (void)setEndpointEventHandlerQueue:;
+ (id)sharedClient;
@end
