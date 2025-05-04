@interface AWEParallelActionsManager : NSObject
@property (nonatomic) BOOL lockStatus;
@property (nonatomic) NSTimer autoUnlockTimer;
@property (nonatomic) UIControl lockedControl;
@property (nonatomic) NSArray exceptionClasses;
- (void)unlockImmediately;
- (void)unlockAfterDelay:;
- (id)autoUnlockTimer;
- (void)setAutoUnlockTimer:;
- (void)setExceptionClasses:;
- (id)exceptionClasses;
- (void)setLockStatus:;
- (void)setLockedControl:;
- (id)lockedControl;
- (BOOL)isCurrentLockingControl:;
- (BOOL)locked;
- (void)lock:;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (BOOL)tryLock;
- (void)unlock;
- (BOOL)lockStatus;
+ (id)sharedManager;
@end
