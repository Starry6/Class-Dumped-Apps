@interface LynxFluencyMonitor : NSObject
@property (nonatomic) LynxFPSMonitor monitor;
@property (nonatomic) BOOL shouldSendAllScrollEvent;
- (void)reportWithRecord:view:tag:;
- (BOOL)shouldSendAllScrollEvent;
- (void)startWithScrollInfo:;
- (void)stopWithScrollInfo:;
- (id)init;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (id)jsonFromRecord:tag:;
+ (id)sharedInstance;
@end
