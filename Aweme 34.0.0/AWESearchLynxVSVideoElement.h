@interface AWESearchLynxVSVideoElement : LynxUI
@property (nonatomic) AWESearchLynxAwemeModelIndex awemeModelIndex;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString containerID;
@property (nonatomic) BOOL attachedSessionId;
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
- (void)setSign:;
- (void)play:withResult:;
- (void)pause:withResult:;
- (void)stop:withResult:;
- (void)playerPlayTime:canPlayTime:totalTime:;
- (void)logExtra:requestReset:;
- (void)fitMode:requestReset:;
- (void)didPlayError:;
- (void)didStartStall;
- (void)propsDidUpdate;
- (void)startposition:requestReset:;
- (void)onNodeReady;
- (void)updateAwemeList:;
- (void)seek:withResult:;
- (void)resetLivePlayer;
- (BOOL)isMediaSourceCard;
- (void)repeat:requestReset:;
- (void)updateModelWithIndex:;
- (void)awemeindex:requestReset:;
- (void)sessionid:requestReset:;
- (void)setAwemeModelIndex:;
- (id)awemeModelIndex;
- (BOOL)shouldEnterFullScreenWithPlayer;
- (void)attachContainerIDAsync:;
- (void)elementDidFinishBind;
- (void)attachContainerID;
- (void)bindContainerID;
- (void)setAttachedSessionId:;
- (BOOL)attachedSessionId;
- (id)getLynxElementType;
- (void)trackEvent:logExtra:;
- (void)didChangePaidStatus:;
- (void)didBecomeActive;
- (void)setStatusDelegate:;
- (void)setContainerID:;
- (id)videoView;
- (void)prepareForReuse;
- (void)didResignActive;
- (id)transitionContext;
- (void)didEnd;
- (id)containerID;
- (void).cxx_destruct;
- (id)statusDelegate;
- (void)didStart;
- (id)createView;
- (void)didStop;
- (void)didPause;
- (id)livePlayer;
+ (id)__lynx_prop_config__1345;
+ (id)__lynx_prop_config__920;
+ (id)__lynx_prop_config__1274;
+ (id)__lynx_prop_config__1031;
+ (id)__lynx_prop_config__1132;
+ (id)__lynx_prop_config__1183;
+ (id)__lynx_ui_method_config__1456;
+ (id)__lynx_ui_method_config__1537;
+ (id)__lynx_ui_method_config__1598;
+ (id)__lynx_ui_method_config__1639;
@end
