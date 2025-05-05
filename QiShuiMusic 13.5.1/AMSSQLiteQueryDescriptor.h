@interface AMSSQLiteQueryDescriptor : NSObject
@property (nonatomic) # entityClass;
@property (nonatomic) # memoryEntityClass;
@property (nonatomic) q limitCount;
@property (nonatomic) NSString orderingClause;
@property (nonatomic) NSArray orderingDirections;
@property (nonatomic) NSArray orderingProperties;
@property (nonatomic) BOOL returnsDistinctEntities;
@property (nonatomic) AMSSQLitePredicate predicate;
- (long long)limitCount;
- (Class)entityClass;
- (void)setReturnsDistinctEntities:;
- (void)setEntityClass:;
- (void)setLimitCount:;
- (id)orderingProperties;
- (id)orderingClause;
- (Class)memoryEntityClass;
- (id)predicate;
- (BOOL)returnsDistinctEntities;
- (void)setOrderingClause:;
- (void)setPredicate:;
- (void)setMemoryEntityClass:;
- (void)setOrderingDirections:;
- (void).cxx_destruct;
- (void)setOrderingProperties:;
- (id)orderingDirections;
- (id)copyWithZone:;
- (id)_newSelectSQLWithProperties:columns:;
@end
