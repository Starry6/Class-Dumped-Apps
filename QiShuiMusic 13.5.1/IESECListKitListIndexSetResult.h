@interface IESECListKitListIndexSetResult : NSObject
@property (nonatomic) NSIndexSet inserts;
@property (nonatomic) NSIndexSet deletes;
@property (nonatomic) NSIndexSet updates;
@property (nonatomic) NSArray moves;
@property (nonatomic) NSDictionary oldToNewMap;
- (void)setOldToNewMap:;
- (id)initWithInserts:deletes:updates:moves:oldToNewMap:;
- (id)oldToNewMap;
- (void)setDeletes:;
- (void)setInserts:;
- (id)inserts;
- (void).cxx_destruct;
- (void)setUpdates:;
- (id)deletes;
- (id)updates;
- (id)moves;
- (void)setMoves:;
@end
