@interface NSSQLBoundedByIntermediate : NSSQLIntermediate
- (void)dealloc;
- (id)generateSQLStringInContext:;
- (id)initWithWorkingEntity:target:bounds:scope:;
@end
