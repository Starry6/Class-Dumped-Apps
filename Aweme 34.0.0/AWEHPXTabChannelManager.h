@interface AWEHPXTabChannelManager : AWEHPChannelBaseManager
@property (nonatomic) AWEHPXTabChannelViewController contentVC;
@property (nonatomic) NSArray pluginControllers;
- (id)contentVC;
- (void)setContentVC:;
- (BOOL)channelTopTabShouldRepeatedClickTab;
- (void)channelWillReloadWithConfig:;
- (double)interactionRightContainerHeight;
- (double)nextInteractionRightContainerHeight;
- (id)getContentViewController;
- (id)getPrePluginControllers;
- (void)didSwitchSelectedChannelFromChannel:toChannel:config:;
- (id)getXTabStageWithChannel:;
- (void)reloadWithConfig:selectedChannelID:;
- (void)p_endUpdateSelectedChannelPerfMetricsMonitor:previousChannel:;
- (void)callSelectedChannelAnimatedRefreshWithRefreshType:completion:;
- (void)beginUpdateSelectedChannelPerfMetricsMonitorByClick;
- (id)pluginControllers;
- (void)setPluginControllers:;
- (id)initWithConfig:;
- (void).cxx_destruct;
@end
