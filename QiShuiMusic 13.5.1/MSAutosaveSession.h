@interface MSAutosaveSession : NSObject
@property (nonatomic) <MSDAutosaveSessionProtocol> remoteSession;
@property (nonatomic) <MSDAutosaveProtocol> remoteService;
@property (nonatomic) NSString autosaveIdentifier;
- (void).cxx_destruct;
- (id)remoteService;
- (void)setRemoteService:;
- (id)autosaveIdentifier;
- (id)remoteSession;
- (void)setRemoteSession:;
- (id)initWithIdentifier:remoteSession:remoteService:;
- (void)didReconnectRemoteSession:remoteService:;
- (void)remoteSessionDisconnectedWithError:;
+ (id)log;
@end
