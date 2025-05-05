@interface NRActiveDeviceAssertionMonitor : NSObject
@property (nonatomic) BOOL hasActiveAssertion;
- (void)removeObserver:;
- (void)addObserver:;
- (void).cxx_destruct;
- (BOOL)hasActiveAssertion;
+ (id)sharedInstance;
@end
