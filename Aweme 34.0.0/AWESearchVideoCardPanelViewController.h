@interface AWESearchVideoCardPanelViewController : AWESearchBusinessContainerViewController
@property (nonatomic) NSDictionary logParamDict;
@property (nonatomic) AWESearchCachalotAbstractLynxPipeline lynxPipeline;
@property (nonatomic) @? jumpTimeBlock;
- (void)setJumpTimeBlock:;
- (void)feedDidScroll:;
- (id)lynxPipeline;
- (void)setLynxPipeline:;
- (id)formattedJumpTimeForTime:;
- (id)jumpTimeBlock;
- (void)customHandleScrollToDisplayItemWithOffset:index:animated:completionBlock:;
- (id)logParamDict;
- (void)setLogParamDict:;
- (void)updateWithDict:videoPanelSuffix:completion:;
- (void)handleSearchJumpTimeNotification:;
- (void)addAISummaryWithViewModel:videoPanelSuffix:;
- (BOOL)hitAITipsDynamicSettings;
- (id)footerView;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
@end
