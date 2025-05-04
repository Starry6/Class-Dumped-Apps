@interface AWEKnowledgeSwiftImpl.HangoutBasicTrackerController : AWEDCFeedBaseController
- (void)containerScrollViewDidScroll:;
- (void)containerScrollViewDidEndDragging:willDecelerate:;
- (void)containerScrollViewDidEndDecelerating:;
- (void)containerScrollViewWillBeginDragging:;
- (void)enterContainerWithModel:;
- (void)containerViewWillAppear:;
- (void)containerViewDidAppear:;
- (void)containerViewWillDisappear:;
- (void)containerViewDidDisappear:;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:didSelectItemAtIndexPath:;
- (void)listDidReloadData;
- (void)onGeneralActionTriggeredWithType:sender:params:sectionViewModel:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
@end
