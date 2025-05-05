@interface FBApplicationProcessLaunchTransaction : FBTransaction
@property (nonatomic) FBProcess process;
@property (nonatomic) BOOL failedLaunch;
@property (nonatomic) BOOL exited;
- (void)_willFailWithReason:;
- (void)_willInterruptWithReason:;
- (void)removeObserver:;
- (void)_childTransactionDidComplete:;
- (void)_didComplete;
- (BOOL)exited;
- (id)_customizedDescriptionProperties;
- (BOOL)_shouldFailForChildTransaction:;
- (id)init;
- (void)_begin;
- (void)addObserver:;
- (BOOL)_canBeInterrupted;
- (id)initWithApplicationBundleID:executionContextProvider:;
- (void)_queue_processWillLaunch:;
- (id)initWithApplicationProcess:;
- (void)_queue_finishProcessLaunch:;
- (id)process;
- (void).cxx_destruct;
- (BOOL)failedLaunch;
- (void)_willComplete;
- (void)_queue_noteExited;
- (id)initWithProcessIdentity:executionContextProvider:;
- (void)_queue_launchProcess:;
@end
