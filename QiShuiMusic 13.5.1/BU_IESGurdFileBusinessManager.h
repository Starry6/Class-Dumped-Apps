@interface BU_IESGurdFileBusinessManager : NSObject
+ (BOOL)_createDirectoryIfNeeded:error:;
+ (id)backupPathForAccessKey:channel:;
+ (void)_checkIfVersionUpdate;
+ (void)_cleanActiveCacheForAccessKey:channel:errorMessage:;
+ (void)_cleanInactiveCacheForAccessKey:channel:errorMessage:;
+ (BOOL)_createDirectoryIfNeeded:;
+ (void)asyncExecuteBlock:accessKey:channel:;
+ (void)cleanCacheForAccessKey:channel:completion:;
+ (void)cleanInactiveCacheForAccessKey:channel:;
+ (void)createBackupDirectoryIfNeeded;
+ (id)createDirectoryForAccessKey:channel:;
+ (id)createInactiveZipPathForAccessKey:channel:version:md5:error:;
+ (id)dataForAccessKey:channel:path:options:;
+ (BOOL)hasCacheForAccessKey:channel:path:;
+ (id)removeErrorMessageWithPath:error:;
+ (void)cleanCache;
+ (void)setup;
+ (void)_cleanCache;
@end
