@interface AWEMessageReachModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)topTabPluginWithController:;
- (id)bottomTabPlugin;
- (id)sideBarPlugin;
- (id)getMessageReachManager;
- (void)trackTryBubbleShowResultWithBubbleModel:channelID:result:;
- (id)sideBarPluginControllerWithAbility:;
- (id)sideBarMessageReachProxyWithPresenter:leftSideBarBussinessDelegate:;
- (long long)sideBarBadgeCount;
- (id)msgTabBadgeCountAbility;
- (id)createLynxPopup;
- (id)getPopViewAccessManager;
- (id)getPopViewAccessConfig;
- (id)updateVersionAlert;
- (BOOL)delayTriggerVersionUpdateIfNeeded;
- (id)versionUpdateSettingItem;
- (id)feedRecommendAlertManager;
+ (id)commonDialogFeedPlayController;
@end
