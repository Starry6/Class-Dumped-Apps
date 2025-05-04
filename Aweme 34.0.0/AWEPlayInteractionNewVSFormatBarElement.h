@interface AWEPlayInteractionNewVSFormatBarElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEPlayInteractionVSFormatBarView barView;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (BOOL)shouldShowVSFormatBarView:;
- (void)updateBarView;
- (void)trackBottomBarShow;
- (void)vsVideoPreload;
- (id)vsSchema;
- (BOOL)popupCurrentTopVCIfNeededWhenEnterUserProfile;
- (void)trackBottomBarClicked;
- (BOOL)isGuideComponent;
- (void)barTapped;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (id)barView;
- (void)setBarView:;
@end
