@interface AWEPublishPrivacyTransitionViewController : UINavigationController
@property (nonatomic) UIPercentDrivenInteractiveTransition interactiveForPresentation;
@property (nonatomic) UIPanGestureRecognizer transactionPanGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)delayInTransition;
- (id)animationViewInTransition;
- (double)offsetYInTransition;
- (BOOL)needInteractiveTransition;
- (void)handleTransitionGesture:;
- (void)setTransactionPanGesture:;
- (id)transactionPanGesture;
- (id)interactiveForPresentation;
- (void)setInteractiveForPresentation:;
- (id)initWithRootViewController:;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (void)viewDidLoad;
- (id)interactionControllerForDismissal:;
- (void)commonInit;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)initWithNavigationBarClass:toolbarClass:;
- (id)maskColor;
@end
