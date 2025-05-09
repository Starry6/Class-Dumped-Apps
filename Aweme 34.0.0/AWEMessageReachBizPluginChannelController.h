@interface AWEMessageReachBizPluginChannelController : AWEMessageReachBizPluginBaseController
@property (nonatomic) <AWEHPChannelControllerProtocol> channelController;
@property (nonatomic) <AWEMessageReachMaterialAbilityProtocol> materialAbility;
@property (nonatomic) BOOL isChannelLoaded;
@property (nonatomic) BOOL followNotificationDisable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEMessageReachInternalAbilityProtocol> config;
@property (nonatomic) <AWEMessageReachChannelControllerProtocol> componentController;
@property (nonatomic) AWEMessageReachComponentContext showContext;
- (id)channelController;
- (void)setChannelController:;
- (void)channelEnterWithModel:;
- (void)addNotification;
- (void)channelDidLoadWithType:;
- (void)channelDidUnloadWithType:;
- (BOOL)isChannelLoaded;
- (void)setIsChannelLoaded:;
- (void)clearAllStatus;
- (void)coldLaunchRecovery;
- (void)sendDataToChannelPluginWithSceneModel:paramContext:;
- (void)showChannelNextShowComponentWithParamContext:;
- (void)getPrecheckComponentResultsWithParamContext:completion:;
- (BOOL)getCurrentBadgeCanShowStatusWithParamsContext:index:;
- (id)materialAbility;
- (void)setFollowNotificationDisable:;
- (void)showComponentComparePrioritiesWithParamContext:lastComponentList:;
- (void)showChannelNextShowComponentWithParamContext:lastShowingModel:;
- (void)replaceCurrentShowingModelWithNewComponent:paramContext:;
- (BOOL)priorityCompareWithParamContext:requestComponent:;
- (void)showBadgeWithModel:source:;
- (void)setMaterialAbility:;
- (BOOL)followNotificationDisable;
- (id)channelID;
- (void).cxx_destruct;
- (id)initWithController:;
+ (BOOL)channelAllowInjectToController:;
@end
