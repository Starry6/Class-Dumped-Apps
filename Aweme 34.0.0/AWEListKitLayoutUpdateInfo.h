@interface AWEListKitLayoutUpdateInfo : NSObject
@property (nonatomic) NSMutableArray insertedItemIndexPaths;
@property (nonatomic) NSMutableArray deletedItemIndexPaths;
@property (nonatomic) NSMutableIndexSet deletedSectionIndexes;
- (id)getDeletedSectionIndexPaths;
- (void)addDeleteItemIndexPath:;
- (void)addDeleteSectionIndex:;
- (void)addInsertItemIndexPath:;
- (id)deletedSectionIndexes;
- (void)setDeletedSectionIndexes:;
- (void)setDeletedItemIndexPaths:;
- (void).cxx_destruct;
- (void)setInsertedItemIndexPaths:;
- (id)deletedItemIndexPaths;
- (id)insertedItemIndexPaths;
- (void)clean;
@end
