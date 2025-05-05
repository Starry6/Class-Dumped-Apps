@interface IESGurdFileBusinessManager : NSObject
+ (id)_cachePathForAccessKey:channel:path:;
+ (void)_cleanActiveCacheForAccessKey:channel:errorMessage:;
+ (void)_cleanInactiveCacheForAccessKey:channel:errorMessage:;
+ (void)_clearTempFilesIfNeeded;
+ (id)_dataWithCachePath:options:;
+ (id)_internalPackageCachePathForAccessKey:channel:path:;
+ (id)_internalPackageDataForAccessKey:channel:path:options:dataAccessPolicy:;
+ (void)addCacheWhitelistWithAccessKey:channels:;
+ (void)asyncExecuteBlock:accessKey:channel:;
+ (void)cleanCacheForAccessKey:channel:isSync:completion:;
+ (void)clearCache:;
+ (id)dataForAccessKey:channel:path:options:;
+ (BOOL)hasCacheForAccessKey:channel:path:;
+ (id)offlineDataForAccessKey:channel:path:;
+ (id)recreateDirIfNeeded:;
+ (id)removeErrorMessageWithPath:error:;
+ (void)syncExecuteBlock:accessKey:channel:;
+ (void)setup;
@end
