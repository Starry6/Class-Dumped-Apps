@interface AWEStoryImpl.AutoPlayController : AWEStoryImpl.StoryListBaseController
- (void)listDidReloadDataWithCollectionView:;
- (void)listDidPerformBatchUpdatesWithCollectionView:;
- (void)didBecomeActive;
- (void)viewWillDisappear:;
- (id)init;
- (void)willResignActive;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)scrollViewDidEndDragging:willDecelerate:;
@end
