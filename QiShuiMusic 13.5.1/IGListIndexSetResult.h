@interface IGListIndexSetResult : NSObject
@property (nonatomic) q changeCount;
@property (nonatomic) NSIndexSet inserts;
@property (nonatomic) NSIndexSet deletes;
@property (nonatomic) NSIndexSet updates;
@property (nonatomic) NSArray moves;
@property (nonatomic) BOOL hasChanges;
- (id)initWithInserts:deletes:updates:moves:oldIndexMap:newIndexMap:;
- (long long)newIndexForIdentifier:;
- (long long)oldIndexForIdentifier:;
- (id)resultForBatchUpdates;
- (long long)changeCount;
- (BOOL)hasChanges;
- (id)inserts;
- (void).cxx_destruct;
- (id)description;
- (id)deletes;
- (id)updates;
- (id)moves;
@end
