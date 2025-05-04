@interface AWEMVSkeletonLoadingBallController : AWEDCFeedBaseController
@property (nonatomic) AWEMVSkeletonLoadingBallView loadingView;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:skeletonWillDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:skeletonDidEndDisplayingCell:forItemAtIndexPath:;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
@end
