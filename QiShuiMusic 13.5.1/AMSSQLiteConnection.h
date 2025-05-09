@interface AMSSQLiteConnection : NSObject
@property (nonatomic) NSError currentError;
@property (nonatomic) AMSSQLiteConnectionOptions options;
@property (nonatomic) <AMSSQLiteConnectionDelegate> delegate;
@property (nonatomic) q lastChangeCount;
- (BOOL)truncate;
- (BOOL)_close;
- (void)performTransaction:;
- (id)prepareStatement:error:;
- (long long)lastChangeCount;
- (id)_verifiedStatementForPreparedStatement:error:;
- (void)dealloc;
- (BOOL)open;
- (id)initWithOptions:;
- (void)setDelegate:;
- (BOOL)_executeWithError:usingBlock:;
- (BOOL)_executeStatement:error:;
- (BOOL)close;
- (void)executePreparedQuery:withResults:;
- (BOOL)_resetAfterIOError;
- (id)currentError;
- (id)_prepareStatement:error:;
- (id)_statementForPreparedStatement:error:;
- (id)_verifiedStatementForSQL:error:;
- (BOOL)finalizePreparedStatement:error:;
- (BOOL)_performResetAfterCorruptionError;
- (id)options;
- (id)delegate;
- (BOOL)_open;
- (BOOL)_openAndAllowRetry:;
- (void)_finalizeAllStatements;
- (void).cxx_destruct;
- (BOOL)_resetAfterCorruptionError;
- (BOOL)executeWithError:usingBlock:;
- (void)executeQuery:withResults:;
- (BOOL)executeStatement:error:;
- (BOOL)executePreparedStatement:error:bindings:;
- (BOOL)executePreparedStatement:error:;
- (BOOL)executeStatement:error:bindings:;
- (void)_flushAfterTransactionBlocks;
- (void)dispatchAfterTransaction:;
@end
