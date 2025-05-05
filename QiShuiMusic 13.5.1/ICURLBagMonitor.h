@interface ICURLBagMonitor : NSObject
@property (nonatomic) ICURLBag bag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_description;
- (void)_handleUserIdentityStoreDidChange:;
- (void).cxx_destruct;
- (void)environmentMonitorDidChangeNetworkReachability:;
- (id)description;
- (id)_init;
- (id)bag;
- (id)beginObservingBagWithHandler:;
- (void)endObservingBagWithToken:;
- (void)_invalidateBagExpirationTimer;
- (void)_scheduleBagExpirationTimerForDate:;
- (void)_handleBagExpirationTimerFired;
- (void)_beginObservingBag;
- (void)_endObservingBag;
- (void)_requestBagWithPolicy:completionHandler:;
- (void)_updateWithBag:;
+ (id)sharedBagMonitor;
@end
