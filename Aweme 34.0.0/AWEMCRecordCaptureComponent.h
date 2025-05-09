@interface AWEMCRecordCaptureComponent : AFDMomentCameraBaseComponent
@property (nonatomic) UIView fakeCaptureButton;
@property (nonatomic) CMCLightningRecordAnimationView animationView;
@property (nonatomic) AWEMCRecordCaptureViewModel viewModel;
@property (nonatomic) <AFDMomentCameraService> cameraService;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIView bubbleAnchor;
@property (nonatomic) <AFDMomentCameraFlowService> flowService;
@property (nonatomic) <AFDMomentContextService> contextService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (id)cameraService;
- (void)setCameraService:;
- (id)contextService;
- (void)setContextService:;
- (id)flowService;
- (void)setFlowService:;
- (void)onCameraFirstFrameDidRender:;
- (void)componentDidLayoutSubviews;
- (id)bubbleAnchor;
- (void)setBubbleAnchor:;
- (void)setFakeCaptureButton:;
- (id)fakeCaptureButton;
- (void)flowServiceDidUpdateDuration:;
- (double)p_maxDuration;
- (void)tipShowCountAdd;
- (double)tipShowCount;
- (BOOL)animationShouldBegin:;
- (void)animationDidBegin:;
- (void)animationDidEnd:;
- (void)animationDidMoved:;
- (void)touchBeginWithAnimationDisabled:;
- (BOOL)shouldRespondsToAnimationDidEnd:;
- (void)animationViewDidReceiveTap;
- (BOOL)canTakePhotoWithTap;
- (BOOL)needBlockAnimationTouches:;
- (BOOL)isTapAndHoldToRecordCase;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)animationView;
- (void)setAnimationView:;
@end
