@interface AWEListIndexSetResult : NSObject
@property (nonatomic) NSIndexSet inserts;
@property (nonatomic) NSIndexSet deletes;
@property (nonatomic) NSIndexSet updates;
@property (nonatomic) NSArray moves;
@property (nonatomic) NSDictionary oldToNewMap;
- (id)initWithInserts:deletes:updates:moves:oldToNewMap:;
- (id)oldToNewMap;
- (void)setOldToNewMap:;
- (id)inserts;
- (id)updates;
- (void)setInserts:;
- (void)setDeletes:;
- (void).cxx_destruct;
- (id)deletes;
- (void)setUpdates:;
- (id)moves;
- (void)setMoves:;
@end
