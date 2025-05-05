@interface NSSQLManyToMany : NSSQLRelationship
- (void)dealloc;
- (id)correlationTableName;
- (id)columnName;
- (id)initWithEntity:propertyDescription:;
@end
