@interface FigCaptureClientSessionMonitor : NSObject
@property (nonatomic) ^{opaqueCMSession=} session;
@property (nonatomic) NSString applicationID;
@property (nonatomic) NSInteger applicationState;
@property (nonatomic) NSInteger clientType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)clientType;
- (int)observeSession:;
- (id)applicationID;
- (void)dealloc;
- (void)layoutMonitor:didUpdateLayout:;
- (int)applicationState;
- (id)debugDescription;
- (id)initWithClientAuditToken:forThirdPartyTorch:applicationAndLayoutStateHandler:interruptionHandler:;
- (id)session;
- (void)updateApplicationState;
- (id)description;
- (void)deviceLockStateMonitor:didUpdateDeviceLockState:;
- (void)invalidate;
+ (void)startPrewarmingMonitorWithHandler:;
+ (void)stopPrewarmingMonitor;
+ (void)startContinuityCaptureTerminationMonitorWithHandler:;
@end
