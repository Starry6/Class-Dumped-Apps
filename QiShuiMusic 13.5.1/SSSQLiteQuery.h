@interface SSSQLiteQuery : NSObject
@property (nonatomic) SSSQLiteDatabase database;
@property (nonatomic) SSSQLiteQueryDescriptor queryDescriptor;
@property (nonatomic) q countOfEntities;
- (long long)countOfEntities;
- (void)enumeratePersistentIDsUsingBlock:;
- (void)dealloc;
- (id)initWithDatabase:descriptor:;
- (id)database;
- (void)bindToSelectStatement:bindingIndex:;
- (id)queryDescriptor;
- (id)copyEntityIdentifiers;
- (BOOL)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:;
- (void)enumerateMemoryEntitiesWithProperties:usingBlock:;
- (id)copySelectSQLWithProperties:count:;
- (BOOL)createTemporaryTableWithName:properties:count:;
- (void)enumeratePersistentIDsAndProperties:count:usingBlock:;
- (id)_newSelectSQLWithProperties:count:;
@end
