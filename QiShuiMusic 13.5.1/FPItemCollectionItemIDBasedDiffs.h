@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs
@property (nonatomic) NSMutableArray deletedItemIDs;
@property (nonatomic) NSMutableArray updatedItems;
@property (nonatomic) NSMutableDictionary replacedItemsByFormerID;
- (void)setUpdatedItems:;
- (id)updatedItems;
- (id)deletedItemIDs;
- (void).cxx_destruct;
- (void)setDeletedItemIDs:;
- (BOOL)containsChanges;
- (id)replacedItemsByFormerID;
- (void)setReplacedItemsByFormerID:;
@end
