@interface AWEMessageReachABSettingsService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)badgeShowOnVisibleTabEnabled;
- (id)limitVisibleTabIDShowBadge;
- (double)limitVisibleTabThresholdShowBadge;
- (BOOL)messageReachLeftSideBarDotMigrateEnable;
- (BOOL)messagReachLeftSideBarClickDotClearEnable;
- (BOOL)messageReachSideBarDotTimeOpt;
- (BOOL)messageReachMsgTabDotMoveAbilityEnable;
- (BOOL)notifyShowBubbleOnTabUncover;
- (BOOL)notifyShowBubbleOnSideBarVisibility;
- (BOOL)isCommonSubscribeOptimizeOn;
- (long long)subscribeSuccessPanelLimitCount;
- (BOOL)messageReachOptimizeLinkEnable;
+ (BOOL)versionUpdateEntranceOptimize;
+ (unsigned long long)replaceFeedRecommendAlert;
+ (BOOL)disableForceAlert;
+ (BOOL)enableForceAlertTrack;
+ (id)popViewMonitorConfig;
+ (long long)commonSubscribePanelAlertTimeout;
+ (long long)commonSubscribePanelTaskTimeout;
+ (long long)globalAlertTrackerLastActionDuration;
+ (id)globalAlertTrackerIgnoreIdList;
+ (id)globalAlertTrackerIgnoreEnterFromList;
+ (BOOL)globalAlertObserveEnable;
+ (BOOL)enableTrackAlertTerminate;
+ (long long)aboutDouyinOpenAppStoreCase;
+ (BOOL)commonDialogDisable;
+ (BOOL)commonDialogFeedPlayOptimize;
@end
