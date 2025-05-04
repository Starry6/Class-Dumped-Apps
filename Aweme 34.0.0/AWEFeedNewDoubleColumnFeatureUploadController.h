@interface AWEFeedNewDoubleColumnFeatureUploadController : AWEDCFeedBaseController
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (void)containerCollectionView:didSelectItemAtIndexPath:;
- (BOOL)isNeedToReportedAweme:;
@end
