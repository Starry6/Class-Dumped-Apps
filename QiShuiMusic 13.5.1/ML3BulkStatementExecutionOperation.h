@interface ML3BulkStatementExecutionOperation : ML3DatabaseOperation
- (unsigned long long)type;
- (BOOL)_execute:;
- (BOOL)_executeStatements:onConnection:withError:;
@end
