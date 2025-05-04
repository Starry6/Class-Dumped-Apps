@interface AWEPlayInteractionNewReeditStatusElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEReeditStatusView reeditView;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (id)reeditView;
- (void)setReeditView:;
- (void)p_trackOnDisplay;
- (void)onTapReedit;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
@end
