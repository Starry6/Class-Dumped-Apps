@interface AWEIMMyWorksListViewController : UIViewController
@property (nonatomic) <IESIMCustomModalTransitionContext> transitionContext;
- (BOOL)configWithRouterParamDict:;
- (void)didSelectedAwemeModel:;
- (BOOL)selectedAwemeModel:;
- (unsigned long long)selectedIndexAwemeModel:;
- (BOOL)canSelectedAwemeModel:;
- (BOOL)enablePullDismissGestureForPresentation;
- (id)pullIndicatorRegionBackgroundColor;
- (double)customCornerRadius;
- (void)setTransitionContext:;
- (void)viewDidLoad;
- (id)transitionContext;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
