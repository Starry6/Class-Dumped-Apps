@interface MRNowPlayingOriginClientManager : NSObject
@property (nonatomic) @? createNewPlayerCallback;
@property (nonatomic) @? destroyPlayerCallback;
@property (nonatomic) @? generatePlayerIDCallback;
@property (nonatomic) NSArray originClients;
@property (nonatomic) NSArray originClientRequets;
- (void)restoreNowPlayingClientState;
- (id)destroyPlayerCallback;
- (id)init;
- (void)resolveActiveSystemEndpointWithType:timeout:queue:completion:;
- (id)createNewPlayerCallback;
- (void)removeOriginRequests:;
- (void)setDestroyPlayerCallback:;
- (id)playerClientRequestsForPlayerPath:;
- (id)originClients;
- (id)debugDescription;
- (id)activeSystemEndpointOutputDeviceUIDForType:;
- (id)existingPlayerClientRequestsForPlayerPath:;
- (id)existingOriginClientRequestsForPlayerPath:;
- (id)clientForPlayerPath:;
- (void)removeOrigin:;
- (id)originClientRequets;
- (id)clientRequestsForPlayerPath:;
- (id)playerClientForPlayerPath:;
- (id)generatePlayerIDCallback;
- (void)setGeneratePlayerIDCallback:;
- (void).cxx_destruct;
- (id)existingClientRequestsForPlayerPath:;
- (id)originClientForPlayerPath:;
- (void)setCreateNewPlayerCallback:;
- (id)localOriginClient;
- (void)handleActiveSystemEndpointOutputDeviceUIDForType:queue:completion:;
- (id)originClientRequestsForPlayerPath:;
- (id)createCustomOriginClientForOrigin:;
- (void)updateActiveSystemEndpointOutputDeviceUID:forType:;
- (id)originClientForOrigin:;
+ (id)sharedManager;
@end
