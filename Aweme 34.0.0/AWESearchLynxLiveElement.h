@interface AWESearchLynxLiveElement : LynxUI
@property (nonatomic) AWESearchLynxAwemeModelIndex awemeModelIndex;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString containerID;
@property (nonatomic) q payStatus;
@property (nonatomic) BOOL needUpdateModelFlag;
@property (nonatomic) BOOL attachedSessionId;
@property (nonatomic) @? playbackTimeBlock;
@property (nonatomic) NSTimer playbackTimeTimer;
@property (nonatomic) double playbackTime;
@property (nonatomic) BOOL isPlayClip;
@property (nonatomic) double videoClipDuration;
@property (nonatomic) BOOL shouldActive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <SearchDynamicElementStatusDelegate> statusDelegate;
@property (nonatomic) q transitionIndex;
- (id)awemeModel;
- (id)currentAwemeModel;
- (void)setAwemeModel:;
- (id)liveTransitionContext;
- (void)setPlaybackTimeBlock:;
- (void)setSign:;
- (void)play:withResult:;
- (void)stop:withResult:;
- (void)logExtra:requestReset:;
- (void)poster:requestReset:;
- (void)fitMode:requestReset:;
- (void)didPlayError:;
- (void)didStartStall;
- (void)propsDidUpdate;
- (void)onNodeReady;
- (BOOL)shouldActive;
- (void)setPayStatus:;
- (long long)payStatus;
- (void)updateAwemeList:;
- (BOOL)shouldNotActive;
- (void)resetLivePlayer;
- (BOOL)isMediaSourceCard;
- (void)setShouldActive:;
- (void)volume:requestReset:;
- (void)mute:requestReset:;
- (void)payTrialTimeChange:;
- (void)payStatusChange:;
- (void)resetShouldActiveStatus;
- (void)updateModelWithIndex:;
- (void)awemeindex:requestReset:;
- (void)sessionid:requestReset:;
- (void)setAwemeModelIndex:;
- (id)awemeModelIndex;
- (void)setNeedUpdateModelFlag:;
- (BOOL)shouldEnterFullScreenWithPlayer;
- (BOOL)needUpdateModelFlag;
- (void)openPaidPanel:withResult:;
- (void)attachContainerIDAsync:;
- (void)elementDidFinishBind;
- (void)attachContainerID;
- (void)bindContainerID;
- (void)setAttachedSessionId:;
- (BOOL)attachedSessionId;
- (void)registerCallback:forReachingPlaybackTime:;
- (id)playbackTimeBlock;
- (id)getLynxElementType;
- (void)stopPlaybackTimeTimer;
- (void)startPlaybackTimeTimer;
- (void)onTimerAction;
- (id)playbackTimeTimer;
- (void)setPlaybackTimeTimer:;
- (BOOL)openGeneralAutoPlayMonitor;
- (void)setIsPlayClip:;
- (void)setVideoClipDuration:;
- (void)isPlayClip:requestReset:;
- (void)videoClipDuration:requestReset:;
- (BOOL)isPlayClip;
- (double)videoClipDuration;
- (void)btmInfo:requestReset:;
- (void)didBecomeActive;
- (void)setStatusDelegate:;
- (id)init;
- (void)setContainerID:;
- (void)play;
- (id)videoView;
- (void)prepareForReuse;
- (void)didResignActive;
- (id)transitionContext;
- (void)didEnd;
- (id)containerID;
- (void).cxx_destruct;
- (id)statusDelegate;
- (void)stop;
- (void)willEnterFullScreen;
- (double)playbackTime;
- (void)setPlaybackTime:;
- (void)didStart;
- (id)createView;
- (void)didStop;
- (id)livePlayer;
+ (id)__lynx_prop_config__1492;
+ (id)__lynx_prop_config__1583;
+ (id)__lynx_prop_config__1878;
+ (id)__lynx_prop_config__1240;
+ (id)__lynx_prop_config__1674;
+ (id)__lynx_prop_config__1371;
+ (id)__lynx_prop_config__1725;
+ (id)__lynx_prop_config__1797;
+ (id)__lynx_prop_config__1969;
+ (id)__lynx_prop_config__21110;
+ (id)__lynx_ui_method_config__22211;
+ (id)__lynx_ui_method_config__22612;
+ (id)__lynx_ui_method_config__23013;
@end
