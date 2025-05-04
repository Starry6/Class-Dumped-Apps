@interface AWEMateApplicationSectionController : AWEBaseListSectionController
@property (nonatomic) UICollectionReusableView headerView;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (id)init;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (id)inset;
- (Class)headerViewClass;
@end
