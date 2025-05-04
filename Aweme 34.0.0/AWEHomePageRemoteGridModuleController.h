@interface AWEHomePageRemoteGridModuleController : AWEHomePageRemoteBaseModuleController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)homePageRemoteCollectionViewCellOnCreateView:withItemModel:;
- (void)reloadModuleControllerView;
- (double)moduleControllerHeightByWidth:withSection:;
- (id)supportBusinessTypes;
- (long long)collectionViewNumberOfItems:;
- (void)collectionView:didSelectItemAtRow:;
- (id)collectionView:sizeForItemAtRow:withCollectionWidth:;
- (double)collectionViewMinimumInteritemSpacing:;
- (double)collectionViewMinimumLineSpacing:;
- (id)collectionView:referenceSizeForHeaderInSection:withCollectionWidth:;
- (long long)p_getRealColumnAtRow:;
- (id)collectionView:cellForItemAtIndexPath:;
@end
