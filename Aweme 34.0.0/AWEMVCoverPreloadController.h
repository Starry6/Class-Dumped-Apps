@interface AWEMVCoverPreloadController : AWEDCFeedBaseController
@property (nonatomic) AWEMVChannelPageContext mvContext;
@property (nonatomic) AWEMVChannelPreloadManager preloadManager;
@property (nonatomic) NSMutableArray visibleSectionIndexPaths;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (id)preloadManager;
- (void)setPreloadManager:;
- (id)mvContext;
- (id)visibleSectionIndexPaths;
- (void)preloadCoverIfNeeded:;
- (BOOL)shouldPreloadCoverWhenWillDisplay:;
- (void)setVisibleSectionIndexPaths:;
- (unsigned long long)modelIndexInAllModelWithIndexPath:;
- (void).cxx_destruct;
@end
