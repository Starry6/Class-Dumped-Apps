@interface NSSQLColumn : NSSQLProperty
- (unsigned int)slot;
- (unsigned char)sqlType;
- (void)dealloc;
- (void)copyValuesForReadOnlyFetch:;
- (id)initForReadOnlyFetching;
- (id)initWithColumnName:sqlType:;
- (id)columnName;
- (id)initWithEntity:propertyDescription:;
- (id)description;
@end
