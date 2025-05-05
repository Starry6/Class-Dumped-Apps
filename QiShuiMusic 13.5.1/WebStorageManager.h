@interface WebStorageManager : NSObject
- (id)init;
- (unsigned long long)diskUsageForOrigin:;
- (id)origins;
- (void)deleteOrigin:;
- (void)deleteAllOrigins;
- (void)syncLocalStorage;
- (void)syncFileSystemAndTrackerDatabase;
+ (id)_storageDirectoryPath;
+ (id)sharedWebStorageManager;
+ (void)setStorageDatabaseIdleInterval:;
+ (void)closeIdleLocalStorageDatabases;
@end
