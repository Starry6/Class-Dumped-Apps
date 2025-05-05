@interface UIHeldAction : UIDelayedAction
- (void)cancel;
- (void)unschedule;
- (void)resume;
- (void)hold;
- (void).cxx_destruct;
- (BOOL)isHolding;
- (void)touchWithDelay:;
@end
