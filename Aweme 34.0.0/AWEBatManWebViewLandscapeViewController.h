@interface AWEBatManWebViewLandscapeViewController : AWEBatManWebViewBaseViewController
@property (nonatomic) AWEBatManTransitionController transitionController;
@property (nonatomic) UIView rightBlankView;
@property (nonatomic) UIView leftContainerView;
- (BOOL)awe_shouldBypassPresentationHook;
- (id)leftContainerView;
- (void)configUI;
- (void)setLeftContainerView:;
- (id)rightBlankView;
- (void)addRoundedCorner;
- (void)onTapBlank;
- (void)setRightBlankView:;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (id)transitionController;
- (void)setTransitionController:;
- (id)initWithURL:completion:;
- (double)viewWidth;
@end
