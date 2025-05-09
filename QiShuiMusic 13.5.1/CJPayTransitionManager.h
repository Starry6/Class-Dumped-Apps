@interface CJPayTransitionManager : NSObject
@property (nonatomic) CJPayNavigationController navi;
@property (nonatomic) CJPayPresentAnimator presentAnimator;
@property (nonatomic) CJPayDismissAnimator dismissAnimator;
@property (nonatomic) CJPayPushAnimator pushAnimator;
@property (nonatomic) CJPayPopAnimator popAnimator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPopAnimator:;
- (id)navi;
- (id)pushAnimator;
- (void)setNavi:;
- (void)setPushAnimator:;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (void)handleGesture:;
- (id)animationControllerForDismissedController:;
- (id)interactionControllerForDismissal:;
- (void).cxx_destruct;
- (id)navigationController:animationControllerForOperation:fromViewController:toViewController:;
- (id)navigationController:interactionControllerForAnimationController:;
- (id)popAnimator;
- (id)presentAnimator;
- (void)setPresentAnimator:;
- (id)dismissAnimator;
- (void)setDismissAnimator:;
+ (id)transitionManagerWithNavi:;
+ (id)shared;
@end
