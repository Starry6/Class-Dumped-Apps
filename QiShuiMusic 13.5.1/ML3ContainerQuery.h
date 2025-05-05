@interface ML3ContainerQuery : ML3Query
@property (nonatomic) NSArray limitedPersistentIDs;
@property (nonatomic) ML3Container container;
@property (nonatomic) BOOL requiresSmartLimiting;
- (id)selectPersistentIDsSQLAndProperties:ordered:;
- (unsigned long long)countOfEntities;
- (BOOL)hasEntities;
- (id)valueForAggregateFunction:onEntitiesForProperty:;
- (id)container;
- (id)initWithCoder:;
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:ordered:;
- (void)encodeWithCoder:;
- (id)initWithEntityClass:container:predicate:orderingTerms:;
- (id)enumerationDatabaseResultForSQL:onConnection:withParameters:;
- (void).cxx_destruct;
- (id)limitedPersistentIDs;
- (BOOL)requiresSmartLimiting;
- (unsigned long long)countOfDistinctRowsForColumn:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
