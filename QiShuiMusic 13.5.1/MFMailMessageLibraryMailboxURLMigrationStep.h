@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject
@property (nonatomic) EDPersistenceDatabaseConnection sqliteConnection;
- (void).cxx_destruct;
- (BOOL)performMigrationStep;
- (id)initWithSQLiteConnection:;
- (BOOL)_renameMailboxDataFolders:;
- (BOOL)_renameMailboxURLsForMailAccount:inSQLiteDB:;
- (BOOL)_updateMailboxURLsInSQLitedb:withOldURLToNewURLMap:;
- (void)_purgeFoldersMatchingPatterns:;
- (id)sqliteConnection;
- (void)setSqliteConnection:;
@end
