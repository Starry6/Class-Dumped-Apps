@interface CKResourceSQLHelper : NSObject
+ (id)appendColumnSQL:;
+ (id)appendConditionSQL:;
+ (id)deleteFromTable:condictionMap:;
+ (id)queryFromTable:queryColumns:condictionMap:;
@end
