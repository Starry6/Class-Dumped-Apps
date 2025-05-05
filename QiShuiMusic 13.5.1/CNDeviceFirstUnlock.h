@interface CNDeviceFirstUnlock : NSObject
@property (nonatomic) CNUnfairLock handlersLock;
@property (nonatomic) NSMutableDictionary unlockHandlers;
@property (nonatomic) NSOperationQueue workQueue;
@property (nonatomic) CNFuture firstUnlockFuture;
@property (nonatomic) BOOL isUnlockedSinceBoot;
- (void)setUnlockHandlers:;
- (id)init;
- (void)dealloc;
- (void)setWorkQueue:;
- (void)setFirstUnlockFuture:;
- (id)workQueue;
- (void)withHandlersLock_addHandlerWithIdentifier:block:;
- (id)unlockHandlers;
- (void)addUnlockHandlerWithIdentifier:block:;
- (id)firstUnlockFuture;
- (void)setHandlersLock:;
- (void)removeUnlockHandlerWithIdentifier:;
- (long long)countOfUnlockHandlers;
- (BOOL)isUnlockedSinceBoot;
- (void).cxx_destruct;
- (void)withHandlersLock_cancelExistingOperationWithIdentifier:;
- (id)handlersLock;
- (void)waitForAllOperationsToFinish;
- (void)withHandlersLock_registerForDeviceFirstUnlock;
+ (id)sharedInstance;
@end
