@interface AWEIMMsgboxAutoManagementListCollectionView : AWEIMBaseCollectionView
@property (nonatomic) AWEIMMsgboxAutoManagementHeaderReusableView selectHeaderView;
@property (nonatomic) q selectType;
@property (nonatomic) q selectCount;
@property (nonatomic) <AWEIMMsgboxAutoManagementListCollectionViewProtocol> listCollectionViewdelegate;
- (void)setSelectCount:;
- (id)getCurrentSessionWithSession:;
- (id)getCurrentViewModelWithIndexPath:;
- (id)listCollectionViewdelegate;
- (void)refreshHeaderWithType:withCount:;
- (long long)selectCount;
- (id)selectHeaderView;
- (long long)selectType;
- (void)setListCollectionViewdelegate:;
- (void)setSelectHeaderView:;
- (void)setSelectType:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
@end
