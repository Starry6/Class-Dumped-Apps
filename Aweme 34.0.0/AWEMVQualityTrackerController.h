@interface AWEMVQualityTrackerController : AWEDCFeedBaseController
@property (nonatomic) AWEMVChannelPageContext bizContext;
@property (nonatomic) AWEMVInFlowPlayQualityTracker inFlowTracker;
- (void)detailTableViewController:willDisplayCell:forRowAtIndexPath:model:;
- (void)detailTableViewControllerWillDisappear:currentAwemeModel:;
- (void)detailTableViewControllerWillAppear:currentAwemeModel:;
- (void)detailTableViewControllerWillExit:currentAwemeModel:;
- (void)detailTableViewController:scrollViewDidBeginDragging:;
- (void)containerViewDidDisappear:;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:startDidSelectItemAtIndexPath:;
- (void)onRefreshBeStoppedWithRefreshReason:;
- (void)onFetchListDataEndWithReason:response:error:;
- (void)onLoadMoreListDataStartWithReason:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (void)onGeneralActionTriggeredWithType:sender:params:sectionViewModel:;
- (void)detailTableViewControllerVideoPlayerDidReadyForDisplay:;
- (id)bizContext;
- (void)setBizContext:;
- (id)perfMonitor;
- (id)inFlowTracker;
- (void)setInFlowTracker:;
- (void).cxx_destruct;
@end
