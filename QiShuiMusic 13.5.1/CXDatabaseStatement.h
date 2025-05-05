@interface CXDatabaseStatement : NSObject
@property (nonatomic) ^{sqlite3_stmt=} statement;
@property (nonatomic) ^{sqlite3=} database;
- (id)statement;
- (void)setStatement:;
- (id)init;
- (void)dealloc;
- (void)setDatabase:;
- (id)initWithSQL:database:error:;
- (BOOL)executeWithExpectedColumnCount:resultRowHandler:error:;
- (void)finalize;
- (BOOL)bindText:ofLength:atIndex:error:;
- (BOOL)bind:error:;
- (BOOL)bindInt64:atIndex:error:;
- (BOOL)processResultsWithExpectedColumnCount:resultRowHandler:error:;
- (id)database;
- (BOOL)executeWithError:;
@end
