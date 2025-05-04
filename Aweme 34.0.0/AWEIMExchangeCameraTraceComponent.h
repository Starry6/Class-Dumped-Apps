@interface AWEIMExchangeCameraTraceComponent : AFDMomentCameraBaseComponent
@property (nonatomic) <AFDMomentCameraFlowService> flowService;
@property (nonatomic) <AFDMomentCameraPerformanceTrackService> trackService;
@property (nonatomic) AWEIMExchangeCameraTraceViewModel viewModel;
@property (nonatomic) BOOL isRandomBefore;
- (id)trackService;
- (void)componentDidLoad;
- (void)setTrackService:;
- (void)componentDidAppear:;
- (id)flowService;
- (void)setFlowService:;
- (BOOL)isRandomBefore;
- (void)setIsRandomBefore:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
