@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate
- (void)dealloc;
- (id)initWithFetchIntermediate:inScope:;
- (id)generateSQLStringInContext:;
@end
