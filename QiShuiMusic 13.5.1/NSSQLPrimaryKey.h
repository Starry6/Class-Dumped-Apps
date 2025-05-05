@interface NSSQLPrimaryKey : NSSQLColumn
- (void)dealloc;
- (void)copyValuesForReadOnlyFetch:;
- (id)initWithEntity:propertyDescription:;
- (id)name;
@end
