@interface AWENaviDuetRToolBarComponent : AWENaviDuetBaseFeatureComponent
@property (nonatomic) <AWENaviDuetViewContainerProtocol> viewContainer;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)p_showToolBarViewIfNeeded;
- (id)viewModel;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (void)setViewContainer:;
- (id)viewContainer;
@end
