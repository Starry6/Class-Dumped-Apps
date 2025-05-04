@interface AWEPlayInteractionNewSpeciesEncyclopediaElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) UIView<AWEDiscoverDBottomBarViewProtocol> detailContainerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)containerViewDidLoadFailedWithURL:error:;
- (void)bottomBarLynxTapped;
- (BOOL)shouldAppearWithData:;
- (void)trackOnDisplay:;
- (id)detailContainerView;
- (void)updateRelatedReadingView;
- (void)setDetailContainerView:;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
@end
