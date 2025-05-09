@interface AWENearbyForwardTabDYHandler : NSObject
@property (nonatomic) NSMutableDictionary trriggerSceneRecords;
@property (nonatomic) NSMutableDictionary forwardManagers;
@property (nonatomic) NSMutableDictionary forwardContexts;
@property (nonatomic) NSMutableArray enterTabTimers;
@property (nonatomic) q clickNum;
@property (nonatomic) NSString forwardClickPosition;
@property (nonatomic) AWENearbyResourceResponse lastResource;
@property (nonatomic) AWENearbyLifeTabNoticeResopnse lastNoticeRsp;
@property (nonatomic) BOOL enableForward;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWENearbyPageContext pageContext;
@property (nonatomic) UIViewController<AWENearbyContainerChildProtocol> c2ViewController;
- (void)showToast:;
- (void)applicationEnterBackground;
- (void)applicationBecomeActive;
- (long long)clickNum;
- (void)setClickNum:;
- (BOOL)enableForward;
- (void)nearbyC2FeedWillRefreshedWithContext:;
- (void)nearbyC2FeedScrollViewDidEndDraggingWithContext:;
- (void)nearbylifeC2PageFetchFinish:resource:refreshContext:isRefresh:;
- (id)initWithPageContext:c2ViewController:;
- (void)enterNearbyLifeTab;
- (void)leaveNearbyLifeTab;
- (void)setForwardClickPosition:;
- (id)forwardClickPosition;
- (id)c2ViewController;
- (void)setC2ViewController:;
- (void)setEnableForward:;
- (void)setTrriggerSceneRecords:;
- (void)setForwardManagers:;
- (void)setForwardContexts:;
- (void)setEnterTabTimers:;
- (void)setupBindObserver;
- (void)recordFrequencyWithContext:action:;
- (id)forwardManagers;
- (id)trriggerSceneRecords;
- (void)handleTriggers:finalBlk:;
- (void)setLastResource:;
- (BOOL)inCurrentTab;
- (BOOL)inCurrentTabAndTopVc;
- (id)lastResource;
- (void)handleResourceResponseWith:;
- (id)forwardContexts;
- (void)handleResourceResponseWith:guideType:;
- (id)lastNoticeRsp;
- (void)setLastNoticeRsp:;
- (id)contextWithTabNoticeRsp:;
- (void)readStayTimer:guideType:;
- (void)handleGuides:index:triggers:hasShow:lastShowGuide:finalBlk:;
- (void)trackPintopTrigger:triggerType:;
- (void)tryShowGuideView:triggerType:complete:;
- (id)contextWithTabGuide:;
- (id)triggerStringAdapt:;
- (id)couponInfoExtraParam:;
- (void)showNearbyPinTopForDuration:duration:;
- (id)enterTabTimers;
- (void)reqestInsertCardData;
- (id)compnonentIdWithType:;
- (id)lynxInsertFeedCardModelWithData:;
- (void)dealloc;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
- (void)initData;
@end
