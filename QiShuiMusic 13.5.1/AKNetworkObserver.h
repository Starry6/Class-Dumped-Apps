@interface AKNetworkObserver : NSObject
@property (nonatomic) BOOL isNetworkReachable;
- (id)init;
- (void)dealloc;
- (void)_startPathMonitor;
- (void)_networkReachabilityDidChange;
- (void).cxx_destruct;
- (void)removeNetworkReachableObserver:;
- (BOOL)isNetworkReachable;
- (void)addNetworkReachableObserver:selector:;
- (void)_stopPathMonitor;
+ (id)sharedNetworkObserver;
@end
