@interface BKSTerminationAssertionObserverManager : NSObject
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_createMonitor;
- (unsigned long long)efficacyForBundleID:;
- (BOOL)hasTerminationAssertionForBundleID:;
@end
