@interface AWENaviDuetMatchComponent : AWENaviDuetBaseFeatureComponent
@property (nonatomic) AWENaviDuetMatchView panelView;
@property (nonatomic) <AWENaviDuetViewContainerProtocol> viewContainer;
@property (nonatomic) <AWENaviDuetRenderServiceProtocol> renderService;
- (void)showToast:;
- (id)panelView;
- (id)renderService;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)setRenderService:;
- (void)barItemButtonClicked:;
- (id)matchBarItem;
- (void)fetchFriendsSuccess:;
- (void)changSelectedUsers:;
- (void)removePanelViewIfNeeded;
- (BOOL)checkUsersSame:;
- (void)fecthOtherUserEffects:completion:;
- (void)onSelectedUserForDuet;
- (void)showPanelViewIfNeeded;
- (id)checkAndSortResults:;
- (void)handleResults:errMsg:;
- (void)setPanelView:;
- (id)viewModel;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (void)setViewContainer:;
- (id)viewContainer;
@end
