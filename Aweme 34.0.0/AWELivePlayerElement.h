@interface AWELivePlayerElement : BDXLynxLiveLight
@property (nonatomic) AWELivePlayerContainerView containerView;
@property (nonatomic) UIView lynxLiveLightContainer;
@property (nonatomic) IESLivePlayerLynxController playerController;
@property (nonatomic) UIView tapGestureRecognizerView;
@property (nonatomic) HTSLiveRoom aweLiveRoom;
@property (nonatomic) IESLiveIMPaaSWorker worker;
@property (nonatomic) <AWELivePaidStreamControlProvider> paidStreamControl;
@property (nonatomic) BOOL isMutedBeforeFreeTrialFinished;
@property (nonatomic) BOOL isRecordedMutedStatusBeforeFreeTrialFinished;
@property (nonatomic) BOOL nativeEnterRoomSupported;
@property (nonatomic) NSDictionary extraLogParameters;
@property (nonatomic) BOOL didFinishLayout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutDidFinished;
- (void)play:withResult:;
- (void)stop:withResult:;
- (void)logExtra:requestReset:;
- (void)setLynxEnterRoomEnable:requestReset:;
- (void)player:loadStateDidChange:;
- (void)player:playbackStateDidChange:;
- (void)player:didReceiveMetaInfo:processed:;
- (void)player:didReceiveError:;
- (void)playerFrozen:;
- (void)playerResume:;
- (void)paidStreamTrialDidStart:;
- (void)paidStreamTrialDidStop:;
- (id)paidStreamControl;
- (void)setPaidStreamControl:;
- (void)paidStreamTrialDidFinish:reason:;
- (void)paidStreamTrialDidPaid:;
- (id)trialContainerViewForPaidStreamWithScene:;
- (void)setAweLiveRoom:;
- (id)aweLiveRoom;
- (void)paidStreamTrialRemainingTimeChangeTo:scene:;
- (void)paidStreamTrialDidPromised:;
- (id)trialViewForPaidStreamWithScene:;
- (id)lynxLiveLightContainer;
- (void)setLynxLiveLightContainer:;
- (void)setNativeEnterRoomSupported:;
- (void)setTapGestureRecognizerView:;
- (id)tapGestureRecognizerView;
- (void)setupIMConfigCore;
- (void)uninstallMessageReceive;
- (void)setDidFinishLayout:;
- (BOOL)didFinishLayout;
- (void)setExtraLogParameters:;
- (void)checkTapGestureRecognizerView;
- (void)startPaidStreamIfNeeded;
- (void)stopPaidStream;
- (void)installMessageReceive;
- (void)createPaidStreamIfNeeded;
- (void)setupSecurityView;
- (void)updatePaidStatus:;
- (void)paidStreamFreeTrialDidStopWithToken:;
- (void)paidStreamStartWithToken:;
- (void)reportLiveEndStatus;
- (BOOL)isRecordedMutedStatusBeforeFreeTrialFinished;
- (void)setIsMutedBeforeFreeTrialFinished:;
- (void)setIsRecordedMutedStatusBeforeFreeTrialFinished:;
- (BOOL)isMutedBeforeFreeTrialFinished;
- (BOOL)nativeEnterRoomSupported;
- (id)extraLogParameters;
- (void)setRoomData:requestReset:;
- (void)pausePaidStream;
- (void)dealloc;
- (void)setPlayerController:;
- (void)setup;
- (id)containerView;
- (void)setFrame:;
- (id)playerController;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)prepareToPlay;
- (void)messageReceived:;
- (void)setWorker:;
- (id)worker;
- (id)createView;
- (void)singleTap;
+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__2181;
+ (id)__lynx_prop_config__2282;
+ (id)__lynx_prop_config__2323;
+ (id)__lynx_ui_method_config__2424;
+ (id)__lynx_ui_method_config__2535;
@end
