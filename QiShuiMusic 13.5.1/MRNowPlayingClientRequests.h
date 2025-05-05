@interface MRNowPlayingClientRequests : NSObject
@property (nonatomic) MRPlayerPath playerPath;
@property (nonatomic) MRClient client;
@property (nonatomic) MRClient clientProperties;
@property (nonatomic) NSArray nowPlayingClients;
- (void)restoreNowPlayingClientState;
- (id)nowPlayingClients;
- (void)setClientProperties:;
- (id)existingNowPlayingPlayerClientRequestsForPlayerPath:;
- (id)initWithPlayerPath:;
- (void)handleClientPropertiesRequestWithCompletion:;
- (void)removePlayer:;
- (id)debugDescription;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:;
- (id)client;
- (void).cxx_destruct;
- (id)clientProperties;
- (id)playerPath;
@end
