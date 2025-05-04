@interface AWEStoryImpl.StoryFeedAutoPlayController : AWEStoryKit.StoryKitBaseController
- (void)listDidReloadDataWithCollectionView:;
- (void)listDidPerformBatchUpdatesWithCollectionView:;
- (void)didBecomeActive;
- (void)viewWillDisappear:;
- (id)init;
- (void)willResignActive;
- (void)scrollViewDidEndDecelerating:;
- (void)viewDidAppear:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
@end
