@interface AWEHPTabLandingManager : NSObject
@property (nonatomic) AWEHPLandingTabRollBackTask currentRollBackTask;
- (void)canLandingTabWithModel:completionBlock:;
- (void)presentVCStack:byPresentingVC:;
- (void)landingTabWithModel:config:completionBlock:exitBlock:;
- (id)currentTabID;
- (void)p_beginUpdateSelectedChannelPerfMetricsMonitor:completion:;
- (BOOL)p_needAvoidOtherBizComponentWithTabID:params:;
- (id)currentRollBackTask;
- (BOOL)p_stashCurrentTabAndVCStackWithLandingTab:task:;
- (void)trackShowWithTask:result:;
- (void)trackClickWithTask:;
- (void)executeRollBackWithTask:;
- (void)trackDismissWithTask:type:;
- (void)setCurrentRollBackTask:;
- (void)p_endUpdateSelectedChannelPerfMetricsMonitor:fromChannelId:;
- (void)p_cancelUpdateSelectedChannelPerfMetricsMonitor:fromChannelId:;
- (void)p_landingTabWithModel:completionBlock:exitBlock:;
- (BOOL)canTransferToURL;
- (void)p_executeRollBackWithTask:;
- (void)p_popWithRootVCStack:presentedVCStack:transitionProviders:;
- (id)dismissTypeDict;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning:;
+ (id)rollBackConfigFromDict:;
+ (id)sharedInstance;
@end
