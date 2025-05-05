@interface IGListIndexPathResult : NSObject
@property (nonatomic) q changeCount;
@property (nonatomic) NSArray inserts;
@property (nonatomic) NSArray deletes;
@property (nonatomic) NSArray updates;
@property (nonatomic) NSArray moves;
@property (nonatomic) BOOL hasChanges;
- (id)initWithInserts:deletes:updates:moves:oldIndexPathMap:newIndexPathMap:;
- (id)newIndexPathForIdentifier:;
- (id)oldIndexPathForIdentifier:;
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
