@interface SWSystemActivityAssertion : NSObject
@property (nonatomic) BOOL active;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)systemSleepMonitorSleepRequestAborted:;
- (void)systemSleepMonitorWillWakeFromSleep:;
- (void)dealloc;
- (id)initWithIdentifier:sleepMonitor:systemActivityProvider:;
- (void)acquireWithTimeout:handler:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (void)invalidate;
- (BOOL)isActive;
@end
