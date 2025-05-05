@interface NSSQLForeignOrderKey : NSSQLColumn
- (id)foreignKey;
- (void)dealloc;
- (void)copyValuesForReadOnlyFetch:;
- (id)initForReadOnlyFetchingOfEntity:toOneRelationship:;
- (id)initWithEntity:foreignKey:;
- (id)toOneRelationship;
- (id)initWithEntity:propertyDescription:;
- (id)name;
@end
