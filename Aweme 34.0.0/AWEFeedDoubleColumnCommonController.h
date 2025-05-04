@interface AWEFeedDoubleColumnCommonController : AWEDCFeedBaseController
- (void)containerScrollViewWillBeginDragging:;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:didSelectItemAtIndexPath:;
- (void)containerCollectionView:startDidSelectItemAtIndexPath:;
- (void)sectionController:configCell:model:index:;
- (void)enterDetailVCAtIndexPath:withModel:referString:selectedCell:;
- (void)enterInsAtIndexPath:withModel:referString:selectedCell:;
- (void)onLoadPlaceholderDataEndWithResult:placeholderData:;
- (void)onFetchListDataFromHeaderDragWithReason:;
- (void)didSelectDislikeWithModels:;
- (void)recordDislikeModel:;
- (void)trackAdsIfNeeded:model:indexPath:;
@end
