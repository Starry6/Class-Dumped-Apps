@interface AWEHPTopbarShowMonitorManager : NSObject
@property (nonatomic) Q reportCount;
@property (nonatomic) NSArray lastHiddenSceneIDList;
@property (nonatomic) NSArray lastAlphaSceneIDList;
@property (nonatomic) NSString lastHiddenSceneID;
- (void)backToFeedViewController;
- (void)topBarSlidingViewControllerDidFinishScroll;
- (void)monitorTopbarAlphaStatusChangeWithSceneBusinessID:alpha:;
- (void)monitorTopbarHiddenStatusChangeWithBusinessID:hidden:;
- (id)lastHiddenSceneIDList;
- (id)lastAlphaSceneIDList;
- (id)lastHiddenSceneID;
- (void)setLastHiddenSceneID:;
- (void)reportAndRecoverWhenException:;
- (void)setLastHiddenSceneIDList:;
- (void)setLastAlphaSceneIDList:;
- (id)handleTopbarExceptionAndReturnTopbarParamsIfException:;
- (BOOL)topbarShowCanMonitor;
- (void)recoverWhenExceptionWithTimingType:;
- (id)addTopbarParams:;
- (void)reportExceptionWithTimingType:;
- (void)p_recoverWhenExceptionWithTimingType:;
- (void)p_recoverShowView:;
- (void)applicationWillEnterForeground:;
- (void).cxx_destruct;
- (void)setReportCount:;
- (unsigned long long)reportCount;
@end
