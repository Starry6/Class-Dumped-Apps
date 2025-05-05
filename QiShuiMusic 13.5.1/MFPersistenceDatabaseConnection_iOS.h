@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection
- (void)dealloc;
- (long long)transactionTypeForWriting;
- (int)configureSQLConnection;
- (void).cxx_destruct;
- (void)handleSQLResult:message:;
- (BOOL)performWithOptions:transactionError:block:;
@end
