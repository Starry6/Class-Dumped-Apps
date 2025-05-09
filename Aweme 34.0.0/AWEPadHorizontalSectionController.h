@interface AWEPadHorizontalSectionController : AWEPadBaseListSectionController
@property (nonatomic) UICollectionView innerCollectionView;
@property (nonatomic) IGListAdapter innerListAdapter;
@property (nonatomic) NSArray innerSectionViewModels;
@property (nonatomic) AWEPadHorizontalSectionViewModel viewModel;
@property (nonatomic) {UIEdgeInsets=dddd} scrollViewContentInset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (void)didBindSectionViewModel;
- (id)sectionViewModels;
- (void)containerViewDidAppear;
- (id)sectionControllerClassArray;
- (void)setScrollViewContentInset:;
- (id)cellContentSizeWithCollectionViewSize:;
- (long long)numberOfItemsInOnLineWithCollectionViewSize:;
- (void)containerViewDidRefresh;
- (id)innerListAdapter;
- (void)setInnerSectionViewModels:;
- (id)scrollViewContentInset;
- (id)innerCollectionView;
- (void)setupInnerCollectionView:;
- (void)setInnerCollectionView:;
- (id)innerListAdapterWithCollectionView:;
- (id)innerListDataSourceWithCollectionView:;
- (void)setInnerListAdapter:;
- (id)innerSectionViewModels;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
+ (Class)sectionViewModelClass;
@end
