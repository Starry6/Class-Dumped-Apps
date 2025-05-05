@interface DACalDBHelper : NSObject
@property (nonatomic) DALocalDBWatcher watcher;
- (BOOL)closeDatabaseForAuxDatabaseRef:save:;
- (BOOL)closeDatabaseForAccountID:save:;
- (id)databaseForAccountID:;
- (BOOL)saveDatabaseForAuxDatabaseRef:flushCaches:;
- (id)_mainDatabasePath;
- (void)_registerForCalendarYieldNotificationsForDB:;
- (id)watcher;
- (id)_pathForAccountID:createdDatabase:;
- (BOOL)saveDatabaseForAccountID:flushCaches:;
- (id)initWithDatabaseInitOptions:;
- (void)openDatabaseForAccountID:clientID:;
- (id)allOpenDatabases;
- (void).cxx_destruct;
- (void)openDatabaseForAuxDatabaseRef:clientID:;
- (BOOL)_saveDatabase:path:fushCaches:;
- (void)_closeDatabase:path:;
- (void)_openDatabaseForPath:clientID:createdDatabaseToConsume:;
- (id)_cachedDatabaseForAccountID:path:;
- (id)_cachedDatabaseForAuxDatabaseRef:path:;
- (id)databaseForAuxDatabaseRef:;
- (void)setWatcher:;
+ (id)containerProvider;
+ (id)_canonicalizePath:;
+ (id)mainDatabasePath;
+ (void)setMainDatabasePath:containerProvider:;
@end
