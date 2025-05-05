@interface IESLiveSaaSPopupTransition : NSObject
@property (nonatomic) UIViewController<HTSLiveSaaSPopupViewControllerProtocol> viewController;
@property (nonatomic) UINavigationController navigationController;
@property (nonatomic) UIPanGestureRecognizer hideGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHideGesture:;
- (void)addHideGestureForViewController:;
- (id)hideGesture;
- (void)hideGestureActions:;
- (void)showBackAfterPan;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (void)setViewController:;
- (id)navigationController;
- (id)animationControllerForDismissedController:;
- (id)viewController;
- (void).cxx_destruct;
- (void)setNavigationController:;
- (BOOL)gestureRecognizerShouldBegin:;
@end
