@interface CMNetworkActivityMonitor : NSObject
@property (nonatomic) CMNetworkActivityObserver cmObserver;
@property (nonatomic) q showingNetworkActivityCount;
@property (nonatomic) q monitoringActiveCount;
@property (nonatomic) BOOL networkIsActive;
- (void)setNetworkIsActive:;
- (id)init;
- (void)dealloc;
- (BOOL)networkIsActive;
- (long long)monitoringActiveCount;
- (void)endMonitoring;
- (void)setMonitoringActiveCount:;
- (void)setShowingNetworkActivityCount:;
- (long long)showingNetworkActivityCount;
- (void)beginMonitoring;
- (void)setCMObserver:;
- (id)cmObserver;
+ (id)sharedActivityMonitor;
@end
