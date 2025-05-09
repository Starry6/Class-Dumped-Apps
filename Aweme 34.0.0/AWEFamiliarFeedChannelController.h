@interface AWEFamiliarFeedChannelController : NSObject
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> contentVC;
@property (nonatomic) <AWEFriendsYellowDotManagerProtocol> yellowDotManager;
@property (nonatomic) <AWEIMSettingManagerProtocol> settingManager;
@property (nonatomic) <AFDFamiliarFeedInHomepageManagerProtocol> homepageManager;
@property (nonatomic) AFDFamiliarFeedHomepageBubbleManager bubbleManager;
@property (nonatomic) BOOL hasChannelDidLoad;
@property (nonatomic) BOOL hasInitFetch;
@property (nonatomic) BOOL isViewLoaded;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) BOOL isActive;
@property (nonatomic) q refreshState;
@property (nonatomic) double lastLeaveTabTimeStamp;
@property (nonatomic) BOOL isTryShowBubble;
@property (nonatomic) NSString preivousTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
- (void)setPureMode:;
- (void)didFinishLogoutWithUid:;
- (void)channelTopTabDidSelect;
- (void)channelLandingTabWithParams:;
- (void)setIsViewAppearing:;
- (id)homepageManager;
- (void)channelEnterWithModel:;
- (void)channelLeaveWithModel:;
- (void)animateRefreshOnTopTabWithCompletion:;
- (void)channelTrackEntranceShowWithModel:;
- (void)channelTrackContentVCStayTimeWithModel:;
- (void)channelTopTabContainerDidAppear;
- (void)channelTopTabContainerDidDisappear;
- (void)channelTopTabDidUnSelect;
- (void)setRefreshState:;
- (id)getCustomTrackParamsWithTrackInfo:;
- (void)hideAvatarWithCompletion:;
- (void)hideBubbleWithCompletion:;
- (id)bubbleManager;
- (void)setBubbleManager:;
- (BOOL)hasInitFetch;
- (void)setHasInitFetch:;
- (id)contentVC;
- (void)setContentVC:;
- (void)channelTopTabItemTapGestureRecognizerShouldReceiveTouchWithParams:;
- (void)channelDidLoadWithType:;
- (void)channelDidReload;
- (void)channelDidUnloadWithType:;
- (BOOL)channelCanLandingTabWithParams:;
- (void)channelTrackRefreshWithModel:;
- (double)interactionRightContainerHeight;
- (double)nextInteractionRightContainerHeight;
- (BOOL)channelReleaseContentViewController:;
- (id)getContentViewController;
- (BOOL)shouldRefresh;
- (void)setIsViewLoaded:;
- (double)lastLeaveTabTimeStamp;
- (void)setLastLeaveTabTimeStamp:;
- (BOOL)isSelectFamiliarOnTop;
- (id)yellowDotManager;
- (void)setYellowDotManager:;
- (void)hideAvatarWithAnimation:completion:;
- (void)showUnreadBadgeDefaultWithComponentID:showCallBack:hideCallBack:downgradeCallBack:;
- (void)showUnreadBadgeWithCount:withComponentID:entranceAnimationType:showCallBack:hideCallBack:downgradeCallBack:;
- (void)showUnreadBadgeWithText:withComponentID:showCallBack:hideCallBack:downgradeCallBack:;
- (void)hideUnreadBadgeWithCompletion:;
- (void)showBubbleWithModel:showCallBack:clickCallback:dismissCallback:;
- (void)updateTopTabEntranceWithTitle:completion:;
- (void)showAvatarOnTopTabWithImage:completion:;
- (void)tryShowBubbleWithType:;
- (BOOL)isTryShowBubble;
- (void)setIsTryShowBubble:;
- (void)p_refreshVC;
- (BOOL)hasChannelDidLoad;
- (void)setHasChannelDidLoad:;
- (id)channelTopBarEntranceTitle;
- (void)tryShowBubbleTip;
- (void)p_judgeIfEnteredByBubble;
- (BOOL)shouldRefreshWithTimeStamp;
- (void)refreshVC;
- (void)clearPreloadCacheOrFrequency;
- (void)setHomepageManager:;
- (id)preivousTab;
- (void)setPreivousTab:;
- (void)setConfig:;
- (void)setIsActive:;
- (void)dealloc;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (BOOL)isActive;
- (BOOL)isViewLoaded;
- (long long)refreshState;
- (void)setSettingManager:;
- (id)settingManager;
- (id)pageContext;
- (BOOL)isViewAppearing;
@end
