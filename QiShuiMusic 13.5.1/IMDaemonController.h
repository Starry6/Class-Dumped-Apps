@interface IMDaemonController : NSObject
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) IMDaemonConnection connection;
@property (nonatomic) IMDistributingProxy remoteDaemonProxy;
@property (nonatomic) NSMapTable multiplexedConnections;
@property (nonatomic) NSMutableDictionary retainedMultiplexedConnections;
@property (nonatomic) NSDictionary processContext;
@property (nonatomic) IMMultiplexedDaemonConnection anonymousMultiplexedConnection;
@property (nonatomic) Q processCapabilities;
@property (nonatomic) NSArray _servicesToAllow;
@property (nonatomic) NSArray _servicesToDeny;
@property (nonatomic) NSString listenerID;
@property (nonatomic) @ delegate;
@property (nonatomic) BOOL _blocksConnectionAtResume;
@property (nonatomic) BOOL isConnecting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL connected;
@property (nonatomic) <IMDaemonProtocol> remoteDaemon;
@property (nonatomic) <IMDaemonProtocol> synchronousRemoteDaemon;
@property (nonatomic) <IMDaemonProtocol> synchronousReplyingRemoteDaemon;
@property (nonatomic) <IMDaemonProtocol> replyingRemoteDaemon;
@property (nonatomic) IMDaemonQueryController queryController;
@property (nonatomic) IMDaemonListener listener;
@property (nonatomic) I capabilities;
- (void)_noteSetupComplete;
- (id)retainedMultiplexedConnections;
- (BOOL)removeListenerID:;
- (BOOL)addListenerID:capabilities:;
- (id)init;
- (id)multiplexedConnectionWithLabel:capabilities:context:;
- (void)_updateAnonymousMultiplexedConnectionWithAddedCapabilities:;
- (BOOL)setCapabilities:forListenerID:;
- (id)remoteDaemon;
- (unsigned int)capabilities;
- (void)_invalidateMultiplexedConnectionWithUniqueID:;
- (id)synchronousRemoteDaemon;
- (id)_multiplexedConnectionWithUniqueID:label:capabilities:context:retain:;
- (void)_setServicesToDeny:;
- (BOOL)_hasMultiplexedConnectionWithUniqueID:;
- (BOOL)connectToDaemon;
- (id)_servicesToDeny;
- (void)setDelegate:;
- (unsigned long long)_clientCapabilitiesForLegacyClientWithListenerID:requestedCapabilities:;
- (BOOL)hasListenerForID:;
- (BOOL)connectToDaemonWithLaunch:;
- (id)anonymousMultiplexedConnection;
- (BOOL)_blocksConnectionAtResume;
- (void)_connectWithCompletion:;
- (id)_servicesToAllow;
- (void)disconnectFromDaemon;
- (id)replyingRemoteDaemon;
- (unsigned long long)_capabilitiesForMultiplexedConnectionWithUniqueID:;
- (void)setAnonymousMultiplexedConnection:;
- (id)listenerID;
- (BOOL)connectToDaemonWithLaunch:capabilities:blockUntilConnected:;
- (void)sendQueryWithReply:query:;
- (void)_setServicesToAllow:;
- (id)listener;
- (void)blockUntilConnected;
- (unsigned int)capabilitiesForListenerID:;
- (id)processContext;
- (id)multiplexedConnections;
- (unsigned long long)processCapabilities;
- (id)lock;
- (void)_capabilitiesDidChange;
- (void)_setListenerID:;
- (void)_connectWithContextChange:;
- (BOOL)_clientRequiresSynchronousConnectionRescueWithListenerID:;
- (void)killDaemon;
- (BOOL)isConnecting;
- (id)synchronousReplyingRemoteDaemon;
- (void)requestSetup;
- (void)_capabilitiesDidChangeWithContextChange:;
- (id)remoteDaemonProxy;
- (id)queryController;
- (void)_blockUntilSendQueueIsEmpty;
- (void)_setBlocksConnectionAtResume:;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)isConnected;
+ (id)sharedInstance;
+ (id)sharedController;
+ (void)_blockUntilSendQueueIsEmpty;
@end
