@interface CJPayPushAnimator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_finishTransitionWithContext:;
- (void)p_insertBackViewWithShareView:snapImage:;
- (void)p_pushHalfVCWithTransitionContext:shareView:fromVC:toVC:completion:;
- (void)p_pushWithTransitionContext:shareView:;
- (id)p_snapView:;
- (void)animateTransition:;
- (double)transitionDuration:;
@end
