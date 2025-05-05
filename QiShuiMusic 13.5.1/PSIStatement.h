@interface PSIStatement : NSObject
@property (nonatomic) ^{sqlite3_stmt=} stmt;
- (void)dealloc;
- (void)finalizze;
- (long long)int64AtColumn:;
- (double)doubleAtColumn:;
- (void)bindText:atIndex:;
- (void)bindDouble:atIndex:;
- (id)textAtColumn:;
- (void)bindInt64:atIndex:;
- (id)stmt;
- (id)initWithSQLite3Stmt:;
@end
