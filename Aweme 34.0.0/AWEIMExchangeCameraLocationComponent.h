@interface AWEIMExchangeCameraLocationComponent : AFDMomentCameraBaseComponent
@property (nonatomic) <AFDMomentCameraFlowService> flowService;
@property (nonatomic) AWEIMExchangeCameraLocationViewModel viewModel;
@property (nonatomic) UIButton locationButton;
@property (nonatomic) UIView loadingBackView;
@property (nonatomic) AWEIMRadarAnimationView radarLoadingView;
@property (nonatomic) AWEIMLocationAnchorView locationAnchorView;
- (void)componentDidLoad;
- (void)bindObserver;
- (id)locationButton;
- (void)setLocationButton:;
- (id)loadingBackView;
- (void)setLoadingBackView:;
- (id)locationAnchorView;
- (void)setLocationAnchorView:;
- (id)flowService;
- (void)setFlowService:;
- (void)p_makeAndLayoutRadarLoadingViewIfNeeded;
- (id)radarLoadingView;
- (void)p_makeAndLayoutLocationAnchorWithTitle:;
- (id)p_make2DGridWithSize:;
- (void)setRadarLoadingView:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
+ (id)makeLineReplicatorLayerWithLength:lineCount:lineColor:isHorizontal:;
@end
