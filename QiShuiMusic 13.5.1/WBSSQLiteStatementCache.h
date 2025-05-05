@interface WBSSQLiteStatementCache : NSObject
- (id)initWithDatabase:;
- (id)init;
- (id)statementForQuery:error:;
- (void)dealloc;
- (id)_createStatementForQuery:error:;
- (id)cachedStatementForQuery:;
- (void)setCachedStatement:forQuery:;
- (void).cxx_destruct;
- (void)invalidate;
@end
