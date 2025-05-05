@interface NWRemoteConnectionActor : NSObject
@property (nonatomic) NSObject<NWRemoteConnectionActorDelegate> delegate;
@property (nonatomic) NSMutableDictionary connections;
@property (nonatomic) NSMutableDictionary browsers;
- (id)connections;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setConnections:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)updatePathForConnection:;
- (void)sendData:forConnection:;
- (void)updateEndpointsForBrowser:;
- (void)scheduleReadsOnConnection:;
- (BOOL)receiveRemoteCommand:;
- (id)browsers;
- (void)setBrowsers:;
@end
