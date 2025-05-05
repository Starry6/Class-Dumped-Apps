@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate
- (void)dealloc;
- (id)selectIntermediate;
- (id)generateSQLStringInContext:;
- (id)fetchIntermediate;
- (BOOL)isFunctionScoped;
- (id)fetchIntermediateForKeypathExpression:;
- (id)initWithScope:;
@end
