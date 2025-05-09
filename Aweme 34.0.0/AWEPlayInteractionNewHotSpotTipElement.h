@interface AWEPlayInteractionNewHotSpotTipElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) UIView<AWEFeedBottomTipProtocol> hotSearchTipView;
@property (nonatomic) UIView<AWEDiscoverDBottomBarViewProtocol> bottomBarView;
@property (nonatomic) AWEPlayInteractionReusableChecker checker;
@property (nonatomic) double startLoadTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (double)startLoadTime;
- (void)setStartLoadTime:;
- (void)setChecker:;
- (void)viewDidDisposed;
- (void)handleLynxNotification:;
- (void)containerViewDidFinishLoadWithURL:;
- (void)containerViewDidLoadFailedWithURL:error:;
- (void)bottomBarLynxTapped;
- (void)setBottomBarView:;
- (id)hotSearchTipView;
- (void)setHotSearchTipView:;
- (BOOL)shouldAppearWithData:;
- (BOOL)bizDowngradeUseLynxContainer;
- (BOOL)enableLynxReuse;
- (BOOL)showHotSearchTipView:;
- (void)updateHotSearchTipView;
- (void)trackOnDisplay:;
- (void)trackForLynxLoadTime;
- (BOOL)useLynxContainer;
- (void)trackPageSelect;
- (void)dealloc;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (void)reset;
- (id)checker;
- (id)bottomBarView;
@end
