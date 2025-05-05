@interface BMSQLStore : NSObject
@property (nonatomic) BOOL dbIsReady;
@property (nonatomic) {os_unfair_lock_s=I} dbLock;
@property (nonatomic) _bmFMDatabase db;
@property (nonatomic) NSURL dbURL;
@property (nonatomic) ^v sqliteHandle;
- (id)db;
- (id)initWithURL:;
- (void).cxx_destruct;
- (id)sqliteHandle;
- (id)dbURL;
- (id)initWithFMDBHandle:;
- (BOOL)dbIsReady;
- (id)dbLock;
+ (id)migrations;
@end
