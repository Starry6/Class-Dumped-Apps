@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate
- (void)dealloc;
- (BOOL)isUpdateScoped;
- (id)generateSQLStringInContext:;
- (id)initWithEntity:alias:inScope:;
@end
