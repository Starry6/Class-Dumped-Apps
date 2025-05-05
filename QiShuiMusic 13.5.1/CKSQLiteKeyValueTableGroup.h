@interface CKSQLiteKeyValueTableGroup : CKSQLiteTableGroup
- (void).cxx_destruct;
- (id)createTables;
+ (id)keyValueStoreInDatabase:;
@end
