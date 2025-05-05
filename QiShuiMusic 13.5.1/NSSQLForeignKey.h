@interface NSSQLForeignKey : NSSQLColumn
- (void)dealloc;
- (void)copyValuesForReadOnlyFetch:;
- (id)initForReadOnlyFetchingOfEntity:toOneRelationship:;
- (id)initWithEntity:toOneRelationship:;
- (id)toOneRelationship;
- (id)initWithEntity:propertyDescription:;
- (id)name;
@end
