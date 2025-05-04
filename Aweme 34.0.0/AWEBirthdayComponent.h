@interface AWEBirthdayComponent : ACCFeatureComponent
@property (nonatomic) UIView<AFDBirthdayPanelProtocol> actionPanel;
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) UIView<ACCLoadingViewProtocol> loadingView;
- (void)componentDidMount;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)editService;
- (void)setEditService:;
- (void)loadComponentView;
- (void)setActionPanel:;
- (id)actionPanel;
- (void)onChangePicTapped;
- (void)onChangeThemeTapped;
- (void)didSelectImage:;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setViewContainer:;
- (id)viewContainer;
@end
