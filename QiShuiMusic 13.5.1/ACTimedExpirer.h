@interface ACTimedExpirer : NSObject
- (void)_cancelTimer;
- (id)init;
- (void)_unsafeCancelTimer;
- (void)dealloc;
- (void)scheduleExpiration:;
- (void).cxx_destruct;
+ (id)expirerWithTimeout:;
@end
