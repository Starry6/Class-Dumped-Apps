@interface IESLiveSaaSLoadingAnimationFragment : IESLiveRoomComponent
@property (nonatomic) UIView loadingIndicator;
@property (nonatomic) RACCompoundDisposable disposables;
@property (nonatomic) BOOL isLivePaused;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) BOOL showCameraChangeLoading;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDisposables:;
- (id)checkFrameLegitimate:;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentOrientationChanged:;
- (void)didSetAttachingDIContext;
- (id)disposables;
- (BOOL)isLivePaused;
- (void)layoutVSMatchLoadingIndicator;
- (void)onCameraWillChangeTo:source:;
- (void)onFIFAPannelSatusChange:;
- (void)setIsLivePaused:;
- (void)setShowCameraChangeLoading:;
- (BOOL)showCameraChangeLoading;
- (BOOL)useCameraLoadingView;
- (void)dealloc;
- (void)setup;
- (void).cxx_destruct;
- (void)messageReceived:;
- (id)loadingIndicator;
- (void)setLoadingIndicator:;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
