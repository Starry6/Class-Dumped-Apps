@interface CKSQLiteGenericTableGroup : CKSQLiteTableGroup
- (BOOL)validateTables:;
- (id)createTables;
+ (BOOL)supportsGroupCreation;
@end
