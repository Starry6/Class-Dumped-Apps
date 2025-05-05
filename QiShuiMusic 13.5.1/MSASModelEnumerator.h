@interface MSASModelEnumerator : NSEnumerator
@property (nonatomic) ^{sqlite3=} db;
@property (nonatomic) ^{sqlite3_stmt=} stmt;
@property (nonatomic) @? stepBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)db;
- (id)stepBlock;
- (id)nextObject;
- (id)init;
- (void)dealloc;
- (id)stmt;
- (id)initWithDatabase:query:stepBlock:;
- (void)setStmt:;
- (void).cxx_destruct;
- (void)setStepBlock:;
- (void)setQueue:;
- (void)setDb:;
- (id)queue;
+ (id)enumeratorWithDatabase:query:stepBlock:;
@end
