@interface AWEYapEditBackComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) ACCAnimatedButton recaptureButton;
- (void)componentDidMount;
- (id)editService;
- (void)setEditService:;
- (void)loadComponentView;
- (void)backClicked;
- (void)configBottomViewIfNeeded;
- (void)configCornerRadius:forView:;
- (void)removePreUploadingTaskWhenQuit;
- (id)recaptureButton;
- (void)setRecaptureButton:;
- (void)dismissHandler;
- (id)containerViewController;
- (void).cxx_destruct;
- (id)backButtonTitle;
- (void)setViewContainer:;
- (id)viewContainer;
@end
