@interface SFWiFiHealthMonitor : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @? statusHandler;
- (void)_update;
- (id)init;
- (void)_wifiAutoJoinNotification:;
- (id)dispatchQueue;
- (void)_wifiEnsureStopped;
- (void)setDispatchQueue:;
- (void)_invalidate;
- (void)_activate;
- (void)_wifiEnsureStarted;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)reset;
- (void)setInvalidationHandler:;
- (id)description;
- (void)invalidate;
- (void)activate;
- (void)_wifiStatusChangedExternal:;
- (void)_wifiStatusChangedInternal:;
- (id)statusHandler;
- (void)setStatusHandler:;
@end
