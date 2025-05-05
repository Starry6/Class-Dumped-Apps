@interface NRRegistryClient : NRRegistry
@property (nonatomic) <NRNSXPCConnectionProtocol> connection;
@property (nonatomic) Q devicesUpdateCounter;
@property (nonatomic) <NRNSXPCConnectionProtocol> rawConnection;
- (void)setCollection:;
- (id)initWithParameters:;
- (void)_connectToDaemon;
- (id)connection;
- (void).cxx_destruct;
- (id)rawConnection;
- (id)addDiffIndexObserverWithWriteBlock:;
- (void)invalidate;
- (void)removeDiffIndexObserver:;
- (void)syncGrabRegistryWithReadBlock:;
- (unsigned long long)devicesUpdateCounter;
- (BOOL)daemonIdle;
- (void)grabRegistryWithReadBlock:;
- (void)_grabRegistryWithReadBlock:;
- (void)grabRegistryWithReadBlockAsync:;
- (void)grabRegistryWithWriteBlockAsync:;
- (void)_grabRegistryWithWriteBlockAsync:;
- (void)_queryDataAsyncIfNeededWithBlock:;
- (void)_warnAboutMissingEntitlement;
+ (Class)proxyClass;
+ (Class)xpcConnectionClass;
@end
