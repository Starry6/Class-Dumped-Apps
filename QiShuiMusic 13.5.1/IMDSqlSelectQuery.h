@interface IMDSqlSelectQuery : IMDSqlQuery
- (id)initWithTableName:;
- (id)createQueryString;
+ (id)selectQueryForTable:;
+ (id)selectQueryForTable:withColumns:;
+ (id)selectQueryForTable:withColumns:where:;
@end
