@interface MKLookAroundTransitionController : NSObject
@property (nonatomic) UIView sourceView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} initialFrame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (void)setSourceView:;
- (void)_dismiss:fromViewController:animated:completion:;
- (id)sourceView;
- (id)animationControllerForDismissedController:;
- (void).cxx_destruct;
- (void)_present:fromViewController:animated:completion:;
- (void)beginFullScreenDismissalOfViewController:animated:completion:;
- (void)beginFullScreenPresentationOfViewController:fromView:animated:completion:;
- (id)initialFrame;
- (void)setInitialFrame:;
@end
