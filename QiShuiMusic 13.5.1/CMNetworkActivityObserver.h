@interface CMNetworkActivityObserver : NSObject
@property (nonatomic) CMNetworkActivityMonitor activityMonitor;
- (void)dealloc;
- (id)activityMonitor;
- (id)initForActivityMonitor:;
- (void)_pollWithInterval:networkActivityDidCompleteBlock:;
- (void)unregisterObservations;
- (void)invalidate;
- (void)registerObservations;
+ (id)registeredObserverForActivityMonitor:;
@end
