@interface EMRepository : NSObject
@property (nonatomic) EMRemoteConnection connection;
@property (nonatomic) Protocol interfaceProtocol;
@property (nonatomic) EFFuture interfaceFuture;
@property (nonatomic) <EFScheduler> observerScheduler;
- (id)initForTesting;
- (id)interfaceProtocol;
- (id)observerScheduler;
- (id)initWithRemoteConnection:;
- (id)connection;
- (void).cxx_destruct;
- (id)performQuery:withObserver:;
- (void)refreshQueryWithObserver:;
- (void)prepareRepositoryObjects:;
- (id)trampoliningObserverForObserver:;
- (void)setObserverScheduler:;
- (id)interfaceFuture;
+ (id)remoteInterface;
@end
