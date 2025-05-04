@interface AWEPlayInteractionNewNearbyLifeServiceBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWENearbyBottombarView barView;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (id)__trackParams;
- (void)__showTrack;
- (void)__handleBroadCastNotifiction:;
- (BOOL)__shouldShowWithModel:;
- (void)__clickTrack;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (void)tapHandler:;
- (id)barView;
- (void)setBarView:;
@end
