@interface FLSQLiteDatabaseConnection : NSObject
@property (nonatomic) NSString storePath;
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) ^{sqlite3=} db;
- (id)db;
- (void)dealloc;
- (BOOL)open;
- (id)log;
- (void)close;
- (void)setLog:;
- (void)setStorePath:;
- (id)initWithStorePath:;
- (id)storePath;
- (void).cxx_destruct;
@end
