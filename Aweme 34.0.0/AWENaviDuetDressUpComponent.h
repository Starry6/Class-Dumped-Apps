@interface AWENaviDuetDressUpComponent : AWENaviDuetBaseFeatureComponent
@property (nonatomic) <AWENaviDuetViewContainerProtocol> viewContainer;
@property (nonatomic) <AWENaviDuetRenderServiceProtocol> renderService;
- (id)renderService;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)setRenderService:;
- (id)dressUpBarItem;
- (void)barItemButtonClicked:;
- (id)viewModel;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (void)setViewContainer:;
- (id)viewContainer;
@end
