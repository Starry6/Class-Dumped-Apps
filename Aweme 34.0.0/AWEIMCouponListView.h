@interface AWEIMCouponListView : UIView
@property (nonatomic) AWEIMCouponListViewModel viewModel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) RxCollectionViewDiffableDataSource dataSource;
@property (nonatomic) <AWEIMCouponListViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (void)__config;
- (void)couponCollectionViewCell:clickedWithViewModel:;
- (void)__applySnapshotWithAnimatingDifferences:;
- (id)__makeDataSourceWithCollectionView:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)initWithViewModel:;
- (id)delegate;
- (id)viewModel;
- (void)setCollectionView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
@end
