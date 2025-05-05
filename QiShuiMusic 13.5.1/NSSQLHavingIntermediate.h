@interface NSSQLHavingIntermediate : NSSQLIntermediate
- (void)dealloc;
- (id)generateSQLStringInContext:;
- (id)initWithPredicate:inScope:inContext:;
- (BOOL)isHavingScoped;
@end
