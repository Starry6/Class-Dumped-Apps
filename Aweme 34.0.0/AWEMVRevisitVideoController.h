@interface AWEMVRevisitVideoController : AWEDCFeedBaseController
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:didSelectItemAtIndexPath:;
- (void)revisitAvoidIfNeeded:;
- (void)clearRevisitAvoidRecordIfNeeded:;
@end
