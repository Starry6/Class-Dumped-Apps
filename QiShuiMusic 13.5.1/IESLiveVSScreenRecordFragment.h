@interface IESLiveVSScreenRecordFragment : IESLiveRoomComponent
@property (nonatomic) UIButton recordBtn;
@property (nonatomic) IESLiveVSScreenRecordBar recordBar;
@property (nonatomic) IESLiveShareCaptureWidget widget;
@property (nonatomic) IESLiveVSRecordWaterMarkView watermark;
@property (nonatomic) IESLiveLayoutPlaceholderView rightControl;
@property (nonatomic) <IESLiveVSScreenRecorderProtocol> recorder;
@property (nonatomic) IESLiveGCDTimer timer;
@property (nonatomic) PHAsset recordVideoAsset;
@property (nonatomic) @ shareContentModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (void)airplayStateDidChange:;
- (void)animationForAutoRotateToOrientation:duration:size:;
- (void)appDidResignActive;
- (void)appWillTerminate;
- (void)chatChannelViewDidAppearInLandscape;
- (void)componentBindService;
- (void)componentMount;
- (void)componentOrientationChanged:;
- (void)componentOrientationTransitionBegin:;
- (void)componentOrientationTransitioning:;
- (void)componentUnmount;
- (void)didAutoRotateToOrientation:size:;
- (void)didChangeStreamResolution;
- (long long)enablePlayerRecorderOpt;
- (void)handleOrientationChanged:;
- (void)hideAllComponent;
- (void)hideComponentsForPortrait;
- (BOOL)isRecorderRunning;
- (void)layoutWidgetIfNeed:;
- (void)liveWillEndWithReason:;
- (void)modifyEntranceState:animated:;
- (void)onBeginRecordAction:;
- (void)onFIFAPannelSatusChange:;
- (void)onSeekEnd;
- (void)onSeekStart;
- (void)openLandscapeSharePannel;
- (id)recordBar;
- (id)recordBtn;
- (id)recordVideoAsset;
- (void)recorderDidStart;
- (void)resetRecordStatus;
- (void)saveAlbumWithCaptured:;
- (void)setRecordBar:;
- (void)setRecordBtn:;
- (void)setRecordVideoAsset:;
- (void)setRightControl:;
- (void)setShareContentModel:;
- (void)setWatermark:;
- (id)shareContentModel;
- (void)showAllComponent;
- (void)showComponentsForPortrait;
- (void)stopRecorder;
- (void)trackEvent:params:;
- (id)tryToFindMetalView;
- (void)updateRecoderView;
- (void)willHideAllComponent;
- (void)setWidget:;
- (id)widget;
- (void)commonInit;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)setRecorder:;
- (id)recorder;
- (id)watermark;
- (void)messageReceived:;
- (void)appDidEnterBackground;
- (id)rightControl;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
