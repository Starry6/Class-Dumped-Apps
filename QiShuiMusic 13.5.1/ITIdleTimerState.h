@interface ITIdleTimerState : NSObject
- (void).cxx_destruct;
- (id)_init;
- (id)newAssertionToDisableIdleTimerForReason:error:;
- (BOOL)isIdleTimerServiceAvailable;
- (id)newAssertionToDisableIdleTimerForReason:;
- (id)_initWithModel:;
- (id)newIdleTimerAssertionWithConfiguration:forReason:error:;
- (id)newIdleTimerAssertionWithConfiguration:forReason:;
+ (id)sharedInstance;
+ (BOOL)isIdleTimerServiceAvailable;
@end
