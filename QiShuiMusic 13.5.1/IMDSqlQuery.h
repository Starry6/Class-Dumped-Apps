@interface IMDSqlQuery : NSObject
@property (nonatomic) NSString tableName;
@property (nonatomic) NSString columns;
@property (nonatomic) q limit;
@property (nonatomic) NSString where;
- (id)columns;
- (id)initWithTableName:;
- (long long)limit;
- (void)dealloc;
- (id)tableName;
- (void)setLimit:;
- (void)setWhere:;
- (void)setColumns:;
- (id)where;
- (id)createQueryString;
+ (id)databaseQuery:;
@end
