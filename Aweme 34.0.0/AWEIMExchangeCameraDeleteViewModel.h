@interface AWEIMExchangeCameraDeleteViewModel : AFDMomentCameraBaseViewModel
@property (nonatomic) BOOL shouldShowDeleteButton;
@property (nonatomic) AFDMomentCameraPreviewViewModel previewViewModel;
@property (nonatomic) <AFDMomentCameraFlowService> flowService;
@property (nonatomic) <AFDMomentCameraPerformanceTrackService> trackService;
@property (nonatomic) <AFDMomentContextService> contextService;
@property (nonatomic) BOOL isRandonResult;
@property (nonatomic) BOOL closeCameraVC;
- (void)setupViewModel;
- (id)trackService;
- (id)previewViewModel;
- (id)contextService;
- (void)setContextService:;
- (void)setTrackService:;
- (id)flowService;
- (void)setFlowService:;
- (void)p_updateWithState:;
- (void)setCloseCameraVC:;
- (void)trackDeletePost;
- (BOOL)closeCameraVC;
- (void)setIsRandonResult:;
- (BOOL)isRandonResult;
- (void).cxx_destruct;
- (void)setShouldShowDeleteButton:;
- (BOOL)shouldShowDeleteButton;
- (void)didTapDeleteButton;
@end
