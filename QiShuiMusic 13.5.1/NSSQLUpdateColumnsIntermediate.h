@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate
- (BOOL)isUpdateColumnsScoped;
- (void)dealloc;
- (id)generateSQLStringInContext:;
- (id)initWithProperties:values:inScope:;
- (id)governingAliasForKeypathExpression:;
@end
