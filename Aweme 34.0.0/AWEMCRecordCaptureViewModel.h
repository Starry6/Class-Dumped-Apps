@interface AWEMCRecordCaptureViewModel : AFDMomentCameraBaseViewModel
@property (nonatomic) BOOL shouldShowCaptureButton;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL shouldShowTipLabel;
@property (nonatomic) <AFDMomentCameraFlowService> flowService;
- (void)setupViewModel;
- (id)flowService;
- (void)setFlowService:;
- (BOOL)shouldShowCaptureButton;
- (void)p_updateWithState:;
- (void)setShouldShowCaptureButton:;
- (void)setShouldShowTipLabel:;
- (BOOL)shouldShowTipLabel;
- (BOOL)isDisabled;
- (void)setIsDisabled:;
- (void).cxx_destruct;
- (BOOL)userInteractionEnabled;
- (void)setUserInteractionEnabled:;
@end
