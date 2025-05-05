@interface SSSQLiteQueryDescriptor : NSObject
@property (nonatomic) # entityClass;
@property (nonatomic) # memoryEntityClass;
@property (nonatomic) q limitCount;
@property (nonatomic) NSString orderingClause;
@property (nonatomic) NSArray orderingDirections;
@property (nonatomic) NSArray orderingProperties;
@property (nonatomic) BOOL returnsDistinctEntities;
@property (nonatomic) SSSQLitePredicate predicate;
- (long long)limitCount;
- (Class)entityClass;
- (void)setReturnsDistinctEntities:;
- (void)setEntityClass:;
- (void)setLimitCount:;
- (void)dealloc;
- (id)orderingProperties;
- (id)orderingClause;
- (Class)memoryEntityClass;
- (id)predicate;
- (BOOL)returnsDistinctEntities;
- (void)setOrderingClause:;
- (void)setPredicate:;
- (void)setMemoryEntityClass:;
- (void)setOrderingDirections:;
- (void)setOrderingProperties:;
- (id)_newSelectSQLWithProperties:count:columns:;
- (id)orderingDirections;
- (id)copyWithZone:;
@end
