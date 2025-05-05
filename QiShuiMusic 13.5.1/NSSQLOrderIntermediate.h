@interface NSSQLOrderIntermediate : NSSQLIntermediate
- (void)dealloc;
- (id)generateSQLStringInContext:;
- (id)initWithSortDescriptors:inScope:;
@end
