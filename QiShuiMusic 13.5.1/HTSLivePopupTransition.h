@interface HTSLivePopupTransition : NSObject
@property (nonatomic) UIViewController<HTSLivePopupViewControllerProtocol> viewController;
@property (nonatomic) UINavigationController navigationController;
@property (nonatomic) UIPanGestureRecognizer hideGesture;
@property (nonatomic) UIScrollView scrollView;
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
- (void)setScrollView:;
- (void)setViewController:;
- (id)navigationController;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)animationControllerForDismissedController:;
- (id)scrollView;
- (id)viewController;
- (void).cxx_destruct;
- (void)setNavigationController:;
- (BOOL)gestureRecognizerShouldBegin:;
@end
