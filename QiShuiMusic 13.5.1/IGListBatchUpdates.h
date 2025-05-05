@interface IGListBatchUpdates : NSObject
@property (nonatomic) NSMutableIndexSet sectionReloads;
@property (nonatomic) NSMutableArray itemInserts;
@property (nonatomic) NSMutableArray itemDeletes;
@property (nonatomic) NSMutableArray itemReloads;
@property (nonatomic) NSMutableArray itemMoves;
@property (nonatomic) NSMutableArray itemUpdateBlocks;
@property (nonatomic) NSMutableArray itemCompletionBlocks;
- (id)itemCompletionBlocks;
- (id)itemInserts;
- (id)itemMoves;
- (id)itemReloads;
- (id)itemUpdateBlocks;
- (id)sectionReloads;
- (BOOL)hasChanges;
- (id)init;
- (void).cxx_destruct;
- (id)itemDeletes;
@end
