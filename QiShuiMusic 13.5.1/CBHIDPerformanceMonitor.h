@interface CBHIDPerformanceMonitor : NSObject
@property (nonatomic) NSArray devices;
@property (nonatomic) @? excessiveIntervalHandler;
@property (nonatomic) double intervalMs;
@property (nonatomic) @? summaryHandler;
@property (nonatomic) double testSeconds;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
- (void)setDevices:;
- (id)init;
- (void)_invalidated;
- (id)dispatchQueue;
- (id)devices;
- (void)_activateWithCompletion:;
- (void)setDispatchQueue:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (id)excessiveIntervalHandler;
- (void)setExcessiveIntervalHandler:;
- (double)intervalMs;
- (void)setIntervalMs:;
- (id)summaryHandler;
- (void)setSummaryHandler:;
- (double)testSeconds;
- (void)setTestSeconds:;
@end
