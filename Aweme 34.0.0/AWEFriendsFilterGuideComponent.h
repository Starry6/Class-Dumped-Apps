@interface AWEFriendsFilterGuideComponent : ACCFeatureComponent
@property (nonatomic) AWEFriendsFilterGuideView guideView;
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) <ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (nonatomic) <ACCCameraService> cameraService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cameraService;
- (void)setCameraService:;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)onCameraDidStartRender:;
- (void)loadComponentView;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:;
- (BOOL)shouldShowGuideView;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
- (id)guideView;
- (void)setGuideView:;
@end
