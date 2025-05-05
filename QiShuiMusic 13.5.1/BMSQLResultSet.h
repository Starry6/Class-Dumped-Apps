@interface BMSQLResultSet : NSObject
@property (nonatomic) ^{sqlite3_stmt=} stmt;
@property (nonatomic) NSString query;
@property (nonatomic) BMSQLDatabase database;
@property (nonatomic) NSArray columns;
@property (nonatomic) NSDictionary row;
@property (nonatomic) NSError error;
- (id)columns;
- (BOOL)next;
- (id)init;
- (void)dealloc;
- (id)row;
- (id)query;
- (id)error;
- (id)stmt;
- (void).cxx_destruct;
- (id)description;
- (id)database;
- (id)initWithStatement:database:;
- (id)initWithQuery:error:database:;
+ (id)new;
@end
