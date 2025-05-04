@interface AWEMCRecordDurationComponent : AFDMomentCameraBaseComponent
@property (nonatomic) UILabel durationLabel;
@property (nonatomic) q currentDuration;
@property (nonatomic) <AFDMomentCameraService> cameraService;
@property (nonatomic) <AFDMomentCameraFlowService> flowService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (id)cameraService;
- (void)setCameraService:;
- (void)flowServiceDidChangeToState:fromState:;
- (id)flowService;
- (void)setFlowService:;
- (void)cameraService:startRecordWithError:;
- (void)cameraService:stopVideoCaptureWithError:;
- (void)cameraService:didChangeDuration:totalDuration:;
- (void)p_updateWithDuration:;
- (void).cxx_destruct;
- (id)durationLabel;
- (void)setDurationLabel:;
- (long long)currentDuration;
- (void)setCurrentDuration:;
@end
