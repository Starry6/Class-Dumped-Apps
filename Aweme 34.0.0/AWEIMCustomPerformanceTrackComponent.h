@interface AWEIMCustomPerformanceTrackComponent : ACCFeatureComponent
@property (nonatomic) <ACCCameraService> cameraService;
@property (nonatomic) BOOL viewDidFirstAppear;
@property (nonatomic) BOOL cameraFirstFrameDidRendered;
@property (nonatomic) double didClickToViewDidAppear;
@property (nonatomic) double didClickToViewFirstFrame;
@property (nonatomic) double didClickEntranceTimeStamp;
- (id)cameraService;
- (void)setCameraService:;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)onCameraFirstFrameDidRender:;
- (void)bindServices:;
- (BOOL)viewDidFirstAppear;
- (void)setViewDidFirstAppear:;
- (double)didClickEntranceTimeStamp;
- (void)setDidClickEntranceTimeStamp:;
- (void)setDidClickToViewDidAppear:;
- (void)trackFirstFrameInUserExperienceIfNeed;
- (BOOL)cameraFirstFrameDidRendered;
- (double)didClickToViewDidAppear;
- (double)didClickToViewFirstFrame;
- (void)setCameraFirstFrameDidRendered:;
- (void)setDidClickToViewFirstFrame:;
- (void).cxx_destruct;
@end
