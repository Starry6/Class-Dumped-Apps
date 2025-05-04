@interface AWEKnowledgeSwiftImpl.HangoutMigTrackerController : AWEDCFeedBaseController
- (void)detailTableViewControllerWillDisappear:currentAwemeModel:;
- (void)detailTableViewControllerDidAppear:currentAwemeModel:;
- (void)detailTableViewControllerWillExit:currentAwemeModel:;
- (void)containerScrollViewDidScroll:;
- (void)containerScrollViewDidEndDragging:willDecelerate:;
- (void)containerScrollViewDidEndDecelerating:;
- (void)containerScrollViewWillBeginDragging:;
- (void)fullPageFeedViewDidDisappear:;
- (void)containerViewDidAppear:;
- (void)containerViewWillDisappear:;
- (void)containerCollectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (void)containerCollectionView:didSelectItemAtIndexPath:;
- (void)listDidReloadData;
- (void)onGeneralActionTriggeredWithType:sender:params:sectionViewModel:;
- (id)init;
- (void).cxx_destruct;
@end
