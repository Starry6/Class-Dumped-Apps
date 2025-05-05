@interface ML3DatabaseStatementRenderer : NSObject
- (id)savepointStatementWithName:;
- (id)savepointReleaseStatementWithName:;
- (id)commitTransactionStatement;
- (id)insertStatementForTableName:columnNames:;
- (id)rollbackTranscationStatementToSavepointName:;
- (id)beginTransactionStatementWithBehaviorType:;
- (id)insertStatementWithOptions:;
- (id)insertStatementUsingDefaultValuesForTableName:;
- (id)statementWithPrefix:inParameterCount:;
- (id)rollbackTranscationStatement;
+ (id)defaultRenderer;
@end
