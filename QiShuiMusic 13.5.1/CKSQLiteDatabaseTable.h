@interface CKSQLiteDatabaseTable : CKSQLiteTable
@property (nonatomic) CKSQLiteDatabase db;
- (id)db;
- (void)setDb:;
@end
