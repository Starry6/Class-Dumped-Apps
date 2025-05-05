@interface FPItemCollectionIndexPathBasedDiffs : FPItemCollectionDiffs
@property (nonatomic) NSMutableArray movedSourceIndexPaths;
@property (nonatomic) NSMutableArray movedDestinationIndexPaths;
@property (nonatomic) NSMutableIndexSet deletedIndexes;
@property (nonatomic) NSMutableIndexSet insertedIndexes;
@property (nonatomic) NSMutableIndexSet updatedIndexes;
- (id)insertedIndexes;
- (void).cxx_destruct;
- (id)updatedIndexes;
- (id)deletedIndexes;
- (BOOL)containsChanges;
- (id)movedSourceIndexPaths;
- (void)setMovedSourceIndexPaths:;
- (id)movedDestinationIndexPaths;
- (void)setMovedDestinationIndexPaths:;
- (void)setDeletedIndexes:;
- (void)setInsertedIndexes:;
- (void)setUpdatedIndexes:;
@end
