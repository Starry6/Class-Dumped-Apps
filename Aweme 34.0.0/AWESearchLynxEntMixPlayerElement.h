@interface AWESearchLynxEntMixPlayerElement : LynxUI
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) NSString containerID;
@property (nonatomic) UIView blockMaskView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <SearchDynamicElementStatusDelegate> statusDelegate;
@property (nonatomic) q transitionIndex;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)play:withResult:;
- (void)pause:withResult:;
- (void)stop:withResult:;
- (void)playerPlayTime:canPlayTime:totalTime:;
- (void)logExtra:requestReset:;
- (void)poster:requestReset:;
- (void)viewStatusDidChange:;
- (void)startposition:requestReset:;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:isScrolled:;
- (BOOL)shouldUpdatePlayerWhenModelDifferent:;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:;
- (BOOL)shouldLayoutBeforeGenerateFeedSnapshotImageView;
- (void)seek:withResult:;
- (BOOL)isMediaSourceCard;
- (void)repeat:requestReset:;
- (void)mute:requestReset:;
- (id)blockMaskView;
- (void)setBlockMaskView:;
- (void)objectFit:requestReset:;
- (void)sessionid:requestReset:;
- (void)speed:requestReset:;
- (BOOL)shouldEnterFullScreenWithPlayer;
- (void)playerDidStart;
- (void)playerDidStop;
- (void)sendLynxEventWithName:;
- (void)sendLynxEventWithName:extraDetail:;
- (void)playerDidPause;
- (void)playerDidPlayError:;
- (void)paidStreamTrialRemainingTimeChangeTo:remainType:;
- (void)paidStreamTrialDidFinish:;
- (void)playerDidEnd;
- (void)playerDidStartStall;
- (void)awemeModel:requestReset:;
- (void)hideloading:requestReset:;
- (void)idSelector:requestReset:;
- (id)containerAwemeList;
- (void)willTransitionFullScreen;
- (BOOL)openAutoPlayMonitor;
- (void)elementDidFinishBind;
- (id)getLynxElementType;
- (BOOL)isIAAVideo;
- (void)isautoplay:requestReset:;
- (void)didBecomeActive;
- (void)setStatusDelegate:;
- (void)setContainerID:;
- (id)videoView;
- (void)didResignActive;
- (id)transitionContext;
- (id)containerID;
- (void).cxx_destruct;
- (id)statusDelegate;
- (id)createView;
- (void)updateWithModel:;
- (BOOL)isAutoPlay;
- (void)setIsAutoPlay:;
+ (id)__lynx_prop_config__1083;
+ (id)__lynx_prop_config__630;
+ (id)__lynx_prop_config__1366;
+ (id)__lynx_prop_config__681;
+ (id)__lynx_prop_config__1042;
+ (id)__lynx_prop_config__1204;
+ (id)__lynx_prop_config__1285;
+ (id)__lynx_prop_config__1407;
+ (id)__lynx_prop_config__1478;
+ (id)__lynx_prop_config__1589;
+ (id)__lynx_prop_config__16210;
+ (id)__lynx_prop_config__16811;
+ (id)__lynx_ui_method_config__17812;
+ (id)__lynx_ui_method_config__18513;
+ (id)__lynx_ui_method_config__18914;
+ (id)__lynx_ui_method_config__19315;
@end
