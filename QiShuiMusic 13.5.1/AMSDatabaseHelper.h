@interface AMSDatabaseHelper : NSObject
+ (id)databaseFolderNameForType:;
+ (BOOL)removeDatabaseForDataVaultPath:;
+ (BOOL)removeDatabaseForCachePath:;
+ (id)databasePathForCachePath:type:;
+ (id)_databaseNameForType:;
+ (id)databasePathForDataVaultPath:type:;
+ (id)_dataVaultURLForDataVaultPath:;
+ (id)_cachesURLForCachePath:;
+ (void)_applyProtectionClassForDirectoryAtURL:;
+ (BOOL)_addSkipBackupAttribute:forURL:;
@end
