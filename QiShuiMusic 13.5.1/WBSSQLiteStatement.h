@interface WBSSQLiteStatement : NSObject
@property (nonatomic) NSArray columnNames;
@property (nonatomic) NSDictionary columnNamesToIndexes;
@property (nonatomic) ^{sqlite3_stmt=} handle;
@property (nonatomic) WBSSQLiteDatabase database;
- (void)bindInt64:atParameterIndex:;
- (int)execute;
- (BOOL)_isValid;
- (id)init;
- (void)dealloc;
- (id)fetch;
- (void)bindInt:atParameterIndex:;
- (id)handle;
- (void)bindNullAtParameterIndex:;
- (BOOL)execute:;
- (id)columnNames;
- (id)initWithDatabase:query:;
- (BOOL)fetchWithEnumerationBlock:error:;
- (id)initWithDatabase:query:error:;
- (id)columnNamesToIndexes;
- (void).cxx_destruct;
- (void)bindDouble:atParameterIndex:;
- (void)reset;
- (void)bindString:atParameterIndex:;
- (id)database;
- (void)invalidate;
- (void)bindData:atParameterIndex:;
@end
