@interface BSPowerMonitor : NSObject
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
