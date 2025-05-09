@interface AWEMVLocalExperimentManager : NSObject
@property (nonatomic) q lastNetworkStatus;
@property (nonatomic) AWEStorage storage;
@property (nonatomic) NSArray fibonacci;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) q errorCode;
- (void)handleConnectionChanged:;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)setLastNetworkStatus:;
- (long long)lastNetworkStatus;
- (id)resultWithName:;
- (id)resultWithName:expose:;
- (void)exposeExperiment:vid:retryCount:;
- (void)fetchExperimentsIfNeeded;
- (long long)generateRandomNumber;
- (id)hitTest:withExperiment:;
- (id)fibonacci;
- (void)setFibonacci:;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (void)dealloc;
- (void)setErrorCode:;
- (long long)errorCode;
- (void).cxx_destruct;
- (void)registerNotifications;
- (BOOL)isFetching;
- (void)setIsFetching:;
- (BOOL)isValidVersion:;
+ (void)_aweLazyRegisterLoad;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedManager;
@end
