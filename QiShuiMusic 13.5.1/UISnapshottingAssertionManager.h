@interface UISnapshottingAssertionManager : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (void)withLock:;
- (id)acquireNewAssertion;
- (void)relinquishAssertion:;
- (void)executeIfNoActiveAssertions:;
+ (id)sharedInstance;
@end
