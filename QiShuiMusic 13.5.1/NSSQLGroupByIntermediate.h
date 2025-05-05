@interface NSSQLGroupByIntermediate : NSSQLIntermediate
- (void)dealloc;
- (id)initWithProperties:inScope:;
- (id)generateSQLStringInContext:;
@end
