@interface NSSQLAttribute : NSSQLColumn
- (void)dealloc;
- (BOOL)isFileBackedFuture;
- (id)initForReadOnlyFetchWithExpression:;
- (id)attributeDescription;
- (id)initWithEntity:propertyDescription:;
@end
