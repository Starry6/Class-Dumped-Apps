@interface AWERelatedRecommendImpl.RelatedRecommendDCFeedEventDispatcher : NSObject
- (void)containerScrollViewDidScroll:;
- (void)containerScrollViewDidEndDragging:willDecelerate:;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:startDidSelectItemAtIndexPath:;
- (void)themeBeginReload;
- (void)onGeneralActionTriggeredWithType:sender:params:sectionViewModel:;
- (void)fullPageFeedViewDidDisappear:;
- (void)detailTableViewController:willDisplayCell:forRowAtIndexPath:model:;
- (void)detailTableViewControllerWillExit:currentAwemeModel:;
- (void)lastCellMaskViewShowIfNeededWith:;
- (id)init;
- (void).cxx_destruct;
@end
