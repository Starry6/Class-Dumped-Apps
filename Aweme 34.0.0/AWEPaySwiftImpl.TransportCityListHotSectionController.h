@interface AWEPaySwiftImpl.TransportCityListHotSectionController : AWEBaseListSectionController
@property (nonatomic) {UIEdgeInsets=dddd} inset;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (void)configSupplementaryFooterView:;
- (id)init;
- (void).cxx_destruct;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)setInset:;
- (void)setMinimumInteritemSpacing:;
- (void)setMinimumLineSpacing:;
- (Class)footerViewClass;
- (Class)headerViewClass;
@end
