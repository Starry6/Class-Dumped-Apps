@interface IGListReloadDataUpdater : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_reloadItemsInCollectionView:indexPaths:;
- (void)_synchronousReloadDataWithCollectionView:;
- (void)deleteItemsFromCollectionView:indexPaths:;
- (void)insertItemsIntoCollectionView:indexPaths:;
- (void)moveItemInCollectionView:fromIndexPath:toIndexPath:;
- (void)moveSectionInCollectionView:fromIndex:toIndex:;
- (id)objectLookupPointerFunctions;
- (void)performUpdateWithCollectionView:animated:itemUpdates:completion:;
- (void)performUpdateWithCollectionView:fromObjects:toObjectsBlock:animated:objectTransitionBlock:completion:;
- (void)reloadCollectionView:sections:;
- (void)reloadDataWithCollectionView:reloadUpdateBlock:completion:;
- (void)reloadItemInCollectionView:fromIndexPath:toIndexPath:;
@end
