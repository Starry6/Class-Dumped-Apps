@interface AWEMVPreLoadMoreController : AWEDCFeedBaseController
@property (nonatomic) AWEMVChannelPreloadManager preloadManager;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (id)preloadManager;
- (void)setPreloadManager:;
- (void)loadMoreIfNeeded:;
- (unsigned long long)modelIndexInAllModelWithIndexPath:;
- (void).cxx_destruct;
@end
