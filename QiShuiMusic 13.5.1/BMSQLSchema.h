@interface BMSQLSchema : NSObject
@property (nonatomic) NSString tableName;
@property (nonatomic) NSArray columns;
- (id)columns;
- (id)createTableSQL;
- (id)init;
- (id)tableName;
- (id)initWithTableName:columns:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (id)new;
@end
