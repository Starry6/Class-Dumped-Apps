@interface WBDatabaseLockAcquisitor : NSObject
@property (nonatomic) <WBDatabaseLockAcquisitorDelegate> delegate;
- (void)_startTimerWithTimeout:retryInterval:;
- (void)dealloc;
- (void)releaseLock;
- (void)setDelegate:;
- (void)_retryTimerFired:;
- (void)acquireLockWithTimeout:retryInterval:;
- (BOOL)_attemptToLockSyncAndNotifyDelegateOnFailure:;
- (void)acquireLockWithTimeout:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_stopTimer;
- (id)initWithWebBookmarkCollectionClass:;
@end
