@interface IGListCollectionView : UICollectionView
- (void)_didModifyIndexPaths:;
- (void)_didModifySection:;
- (void)_didModifySections:;
- (id)initWithFrame:listCollectionViewLayout:;
- (id)initWithFrame:;
- (id)_listLayout;
- (void)insertSections:;
- (void)deleteSections:;
- (void)reloadSections:;
- (void)moveSection:toSection:;
- (void)insertItemsAtIndexPaths:;
- (void)deleteItemsAtIndexPaths:;
- (void)reloadItemsAtIndexPaths:;
- (void)moveItemAtIndexPath:toIndexPath:;
@end
