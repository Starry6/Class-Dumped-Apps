@interface AWEPlayInteractionUserAvatarElementViewModel : AWEPlayInteractionPersonElementViewModel
@property (nonatomic) BOOL isEnteringLive;
@property (nonatomic) BOOL followFromCurrentPage;
@property (nonatomic) Q followStatus;
@property (nonatomic) BOOL avatarMarkViewChanged;
@property (nonatomic) <AWEIMQuickReplyControllerHandlerPortocol> imQuickReplyHandler;
@property (nonatomic) BOOL souldShowAdFollowToast;
@property (nonatomic) NSDictionary balanceToCouponData;
@property (nonatomic) BOOL isEcomCart;
@property (nonatomic) BOOL avatarPendantClicked;
@property (nonatomic) NSString avatarPendantOpenURL;
@property (nonatomic) Q avatarTapActionType;
@property (nonatomic) <AWELiveSmoothEnterRoomLivePlayerPreloaderService> livePlayerPreloader;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString pageTypeString;
@property (nonatomic) q fromPageType;
@property (nonatomic) BOOL isRecommendedCard;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) NSString refer;
@property (nonatomic) BOOL showDecoration;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
- (void)onFollowViewClicked:;
- (unsigned long long)followStatus;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (BOOL)isEcomCart;
- (id)aAWEPadModuleAdapter;
- (void)setFollowStatus:;
- (BOOL)shouldShowLiveDecorationView;
- (BOOL)isXiguaVideo;
- (id)livePlayerPreloader;
- (void)setLivePlayerPreloader:;
- (void)audienceQuitAllRoom;
- (void)setIsEcomCart:;
- (void)onUserAvatarViewClicked:;
- (void)onNewLiveMarkViewClicked;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (void)subscribedLiveEcomCart:;
- (id)aAWEPlayInteractionAdapter;
- (id)aAWEMainModuleServiceDOUYINHTSAdaper;
- (void)_onFollowStatusChanged:status:error:;
- (BOOL)canFollow;
- (BOOL)formatEnable;
- (void)setImQuickReplyHandler:;
- (id)imQuickReplyHandler;
- (void)removeLivePlayerPreloadTimerWithCallTrace:;
- (void)liveHeadViewWillDisplay;
- (void)unmountLivePlayerPreloaderWithCallTrace:;
- (void)mountLivePlayerPreloaderWithCallTrace:;
- (void)setBTMInfoWithClickedView:;
- (void)onUserAvatarViewClicked:refer:;
- (void)onUnFollowViewClicked:;
- (id)aAWEFeedInteractionDOUYINHTSAdapter;
- (void)onFollowMaskChangedFollowStatus:;
- (void)followedViewClicked;
- (void)onSyncLiveUserNotification:;
- (id)balanceToCouponData;
- (id)p_checkParams:withParamsList:;
- (void)setBalanceToCouponData:;
- (BOOL)isEnteringLive;
- (void)setIsEnteringLive:;
- (void)interactor_onFollowViewClicked:comletion:;
- (void)router_onLiveUserAvatarViewClicked:exitOldRoom:shouldTrack:;
- (void)router_onLiveUserAvatarViewClicked:exitOldRoom:;
- (void)setAvatarPendantClicked:;
- (void)_onNewLiveMarkViewClicked_IMP;
- (id)liveExpendShowParams:;
- (void)didFinishRemoveFans:;
- (void)guestDidFinishFollowUser:isUnfollow:;
- (BOOL)souldShowAdFollowToast;
- (void)onSendMessageViewClicked:voipEnable:iconType:;
- (void)xiguaVideoHeadViewWillDisplay;
- (void)onSendMessageViewClicked:;
- (void)setAvatarPendantOpenURL:;
- (unsigned long long)avatarTapActionType;
- (void)_onUserAvatarViewClicked_IMP:;
- (BOOL)isAdNormalTopview;
- (void)router_onAdLiveUserAvatarViewClicked:exitOldRoom:shouldTrack:;
- (void)router_onLinkMicUserAvatarViewClicked:exitOldRoom:shouldTrack:;
- (void)router_onNewLiveMarkViewClicked;
- (BOOL)avatarPendantClicked;
- (id)avatarPendantOpenURL;
- (void)updateAvatarMark;
- (void)p_provideUniversalParamsWithRoomModel:;
- (void)generalFollowContext:;
- (void)_tryRevertFollowStatus;
- (void)setSouldShowAdFollowToast:;
- (void)interactor_onFollowViewClicked:allowDialog:comletion:;
- (void)trackUnFollow;
- (void)guest_onFollowViewClicked:completion:;
- (void)setFollowFromCurrentPage:;
- (void)trackFCollectFollowClick;
- (id)buildPreloaderOptions;
- (BOOL)enableMountPlayerPreloader;
- (void)trackerAvatarLiveStateChange;
- (void)setAvatarMarkViewChanged:;
- (BOOL)followFromCurrentPage;
- (BOOL)avatarMarkViewChanged;
- (void)setAvatarTapActionType:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isLive;
- (long long)liveStatus;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEFeedInteractionDOUYINHTSAdapterClass;
@end
