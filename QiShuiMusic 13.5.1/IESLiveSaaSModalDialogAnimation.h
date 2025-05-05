@interface IESLiveSaaSModalDialogAnimation : NSObject
@property (nonatomic) UIViewController presentor;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) UIControl maskView;
@property (nonatomic) UIGestureRecognizer tapGestureRecognizer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationsShow:animateTransition:animations:completion:;
- (void)animateTransition:;
- (double)transitionDuration:;
- (void)setViewController:;
- (id)maskView;
- (void)setTapGestureRecognizer:;
- (id)tapGestureRecognizer;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithViewController:;
- (void)setMaskView:;
- (id)presentor;
- (void)setPresentor:;
@end
