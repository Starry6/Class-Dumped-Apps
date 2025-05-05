@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate
- (void)dealloc;
- (id)generateSQLStringInContext:;
- (id)initWithScope:;
- (id)resolveVariableExpression:inContext:;
- (BOOL)onlyFetchesAggregates;
@end
