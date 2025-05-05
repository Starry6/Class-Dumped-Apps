@interface ACAccountMigrationState : NSObject
+ (id)_currentSystemVersion;
+ (BOOL)isMigrationFinished;
+ (BOOL)migrationFinishedForKey:;
+ (void)writeMigrationVersionPref;
+ (void)writeMigrationVersionPrefForKey:;
@end
