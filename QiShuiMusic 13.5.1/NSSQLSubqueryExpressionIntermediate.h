@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate
- (void)dealloc;
- (void)_promoteJoinsForSubqueryScopedKeypath:;
- (id)_generateSQLForVariableExpression:allowToMany:inContext:;
- (id)generateSQLStringInContext:;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)fetchIntermediateForKeypathExpression:;
- (id)governingAliasForKeypathExpression:;
- (BOOL)keypathExpressionIsSafeLHSForIn:;
- (id)governingEntityForKeypathExpression:;
- (id)initWithExpression:trailingKeypath:inScope:;
@end
