@interface WebDatabaseManager : NSObject
- (id)init;
- (id)origins;
- (id)databasesWithOrigin:;
- (id)detailsForDatabase:withOrigin:;
- (void)deleteAllDatabases;
- (BOOL)deleteOrigin:;
- (BOOL)deleteDatabase:withOrigin:;
- (void)deleteAllIndexedDatabases;
+ (void)scheduleEmptyDatabaseRemoval;
+ (id)sharedWebDatabaseManager;
+ (void)removeEmptyDatabaseFiles;
@end
