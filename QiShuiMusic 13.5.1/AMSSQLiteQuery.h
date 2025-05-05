@interface AMSSQLiteQuery : NSObject
@property (nonatomic) AMSSQLiteConnection connection;
@property (nonatomic) AMSSQLiteQueryDescriptor queryDescriptor;
@property (nonatomic) q countOfEntities;
- (void)enumeratePersistentIDsAndProperties:usingBlock:;
- (long long)countOfEntities;
- (void)enumeratePersistentIDsUsingBlock:;
- (id)connection;
- (void).cxx_destruct;
- (id)queryDescriptor;
- (void)applyBinding:atIndex:;
- (id)initOnConnection:descriptor:;
- (id)copyEntityIdentifiers;
- (id)copySelectSQLWithProperties:;
- (BOOL)createTemporaryTableWithName:properties:;
- (BOOL)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:;
- (void)enumerateMemoryEntitiesWithProperties:usingBlock:;
- (id)_newSelectSQLWithProperties:;
@end
