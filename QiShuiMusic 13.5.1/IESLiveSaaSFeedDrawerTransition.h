@interface IESLiveSaaSFeedDrawerTransition : NSObject
@property (nonatomic) UIPanGestureRecognizer hideGesture;
@property (nonatomic) UIPercentDrivenInteractiveTransition animator;
@property (nonatomic) @? showActionBlock;
@property (nonatomic) @? hideActionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hideActionBlock;
- (void)setHideGesture:;
- (id)showActionBlock;
- (void)addHideGestureForView:;
- (void)gestureChanged:isDismiss:;
- (id)hideGesture;
- (void)hideGestureActions:;
- (void)setHideActionBlock:;
- (void)setShowActionBlock:;
- (void)showGestureChanged:;
- (BOOL)showGestureShouldBegin:;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animator;
- (id)interactionControllerForPresentation:;
- (void)setAnimator:;
- (id)animationControllerForDismissedController:;
- (id)interactionControllerForDismissal:;
- (void).cxx_destruct;
@end
