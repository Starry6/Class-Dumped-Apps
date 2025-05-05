@interface BMTableStore : NSObject
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSArray classArray;
@property (nonatomic) NSString sqlReplace;
@property (nonatomic) _bmFMDatabase db;
@property (nonatomic) NSURL dbURL;
@property (nonatomic) NSString tableName;
- (id)db;
- (id)initWithURL:;
- (id)tableName;
- (id)lock;
- (void).cxx_destruct;
- (BOOL)closeDB;
- (BOOL)openDB;
- (BOOL)addTable:named:error:;
- (BOOL)upsertRows:error:;
- (id)selectTableNamed:error:;
- (BOOL)setupClassArray:table:named:error:;
- (id)dbURL;
- (id)classArray;
- (id)sqlReplace;
@end
