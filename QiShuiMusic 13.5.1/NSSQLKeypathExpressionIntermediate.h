@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate
- (id)_generateSQLForKeyPathExpression:allowToMany:inContext:;
- (id)generateSQLStringInContext:;
@end
