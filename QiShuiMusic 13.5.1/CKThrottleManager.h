@interface CKThrottleManager : NSObject
- (void)resetThrottles;
- (void)throttleListBecameEmpty;
- (id)CKStatusReportArray;
- (void)noteDataChangeForThrottle:;
- (void)setThrottleObserver:;
- (id)allThrottles;
- (BOOL)addThrottle:;
- (id)enforcedThrottleForCriteria:willSendRequest:outThrottleError:;
- (void).cxx_destruct;
- (id)_init;
- (void)throttleWasAdded:;
- (void)throttleWillBeRemoved:;
+ (id)sharedManager;
@end
