@interface AWEEcomSearchMerchandiseGuideSearchListController : AWEEcomSearchListBaseController
@property (nonatomic) UICollectionReusableView<AWESearchDoubleColumnReusableHeaderViewProtocol> headerView;
- (double)collectionView:layout:heightForHeaderInSection:;
- (unsigned long long)aweui_viewControllerState;
- (void)registerCollectionViewCell:;
- (void)clearGuideSearchWord;
- (void)headerViewShouldUpdateTheme:;
- (id)keywordList;
- (void)didSelectWord:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (void)collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
@end
