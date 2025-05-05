@interface GEONavdCacheDBWriter : GEODBWriter
- (void)dealloc;
- (id)initWithPath:;
- (void)performTableCreationTasks;
- (void)performStatementPreparationTasks;
- (void)_openIfNecessary;
- (void)_createCacheTable;
- (long long)_insertWithKey:value:;
- (void)_deleteRowsWithRowIDs:;
- (BOOL)_updateRowId:withKey:value:;
- (void)_deleteAllRows;
@end
