@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate
- (id)generateSQLStringInContext:;
- (BOOL)isFunctionScoped;
@end
