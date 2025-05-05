@interface NSSQLSelectIntermediate : NSSQLIntermediate
- (void)dealloc;
- (id)generateSQLStringInContext:;
- (id)initForCorrelationTarget:alias:fetchColumns:inScope:;
- (id)initWithEntity:alias:fetchColumns:inScope:;
- (id)resolveVariableExpression:inContext:;
- (BOOL)onlyFetchesAggregates;
- (BOOL)isTargetColumnsScoped;
@end
