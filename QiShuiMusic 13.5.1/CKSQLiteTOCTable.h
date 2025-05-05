@interface CKSQLiteTOCTable : CKSQLiteTOCTableBase
- (id)tocEntriesWithGroupID:error:;
+ (id)dbTableName;
+ (id)dbProperties;
+ (Class)entryClass;
@end
