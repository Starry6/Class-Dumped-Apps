@interface AWEFeedChannelManager : AWEHPChannelBaseManager
@property (nonatomic) AWEHPMessageForwardManager messageForwardManager;
@property (nonatomic) AWEHPEditPanelController editPanelController;
- (void)reloadChannelWithChannelModels:currentChannelIDList:reloadType:selectedChannelID:;
- (void)tabBarWillUnSelectItemWithLeaveModel:;
- (void)tabBarWillSelectItemWithEnterModel:;
- (void)willSetupChannel:;
- (id)generateTopItemUIModelWithChannel:;
- (void)didSetupChannel:;
- (void)p_sendMonitorWithChannel:event:metric:category:extra:;
- (BOOL)callCanLandingUsingRecursiveWithConfig:;
- (id)getFeedHomePageContextWithChannel:;
- (void)didSwitchSelectedChannelFromChannel:toChannel:config:;
- (void)didUpdateCurrentChannels:;
- (id)messageForwardManager;
- (void)callEnterUsingRecursiveWithModel:;
- (void)callLeaveUsingRecursiveWithModel:;
- (id)getTopTabEditPanelController;
- (id)getEditPanelConfig;
- (id)editPanelController;
- (BOOL)isEditPanelShowing;
- (id)getTopBarStageWithChannel:;
- (id)p_getReorderedAllChannelListWithCurrentChannelList:;
- (id)selectedTabIDWithChannel:;
- (void)setMessageForwardManager:;
- (void)setEditPanelController:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
