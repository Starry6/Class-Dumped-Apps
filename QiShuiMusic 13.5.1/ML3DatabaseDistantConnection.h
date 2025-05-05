@interface ML3DatabaseDistantConnection : ML3DatabaseConnection
@property (nonatomic) <ML3DatabaseDistantConnectionDelegate> distantDelegate;
- (BOOL)isReadOnly;
- (id)initWithDatabasePath:;
- (id)currentTransactionID;
- (void)setReadOnly:;
- (void)dealloc;
- (BOOL)isOpen;
- (BOOL)registerFunctionName:argumentCount:functionPointer:userData:;
- (BOOL)_internalExecuteUpdate:withParameters:error:;
- (BOOL)close;
- (void)_serviceTerminatedTransactionNotification:;
- (void)setDistantDelegate:;
- (id)openBlobInTable:column:row:readOnly:;
- (BOOL)_internalEndTransactionAndCommit:;
- (BOOL)_internalBeginTransactionWithBehaviorType:isRetry:;
- (BOOL)_openWithFlags:;
- (void).cxx_destruct;
- (id)_internalExecuteQuery:withParameters:limitProperty:limitValue:;
- (BOOL)registerFunctionName:argumentCount:block:;
- (BOOL)registerModule:;
- (BOOL)shouldCacheStatements;
- (id)_sqliteHandle;
- (int)checkpointDatabase;
- (id)distantDelegate;
- (BOOL)_internalBeginTransactionWithBehaviorType:;
@end
