@interface AWEKnowledgeSwiftImpl.HangoutPinTopController : AWEDCFeedBaseController
- (void)detailTableViewController:scrollDidEndAtIndexPath:model:;
- (void)detailTableViewControllerWillExit:currentAwemeModel:;
- (void)fullPageFeedWillPlayModel:index:;
- (void)fullPageFeedViewDidDisappear:;
- (void)containerViewDidDisappear:;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (id)init;
@end
