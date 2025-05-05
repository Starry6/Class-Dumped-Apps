@interface QLZoomTransitionDriver : QLTransitionDriver
- (void)tearDown;
- (void).cxx_destruct;
- (void)animateTransition;
- (void)_performZoomTransition;
+ (void)cropView:toAvoidNavigationOffset:presenting:animationDuration:;
@end
