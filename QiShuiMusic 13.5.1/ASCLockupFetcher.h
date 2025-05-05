@interface ASCLockupFetcher : NSObject
@property (nonatomic) <ASCServices> connection;
@property (nonatomic) ASCPendingPromises pendingRequests;
@property (nonatomic) ASCTaskCoordinator requestCoordinator;
@property (nonatomic) ASCLazy bundleCoordinator;
- (void)dealloc;
- (id)requestCoordinator;
- (id)connection;
- (void).cxx_destruct;
- (id)pendingRequests;
- (id)initWithConnection:;
- (void)daemonConnectionWasLost:;
- (void)daemonDidRebootstrap:;
- (id)loadedLockupWithRequest:;
- (id)lockupWithRequest:;
- (void)submitBatchRequest:;
- (id)lockupForBundleID:withContext:;
- (id)collectionWithRequest:;
- (id)bundleCoordinator;
+ (id)sharedFetcher;
@end
