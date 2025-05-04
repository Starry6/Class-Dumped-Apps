@interface AWEHamletCacheSwiftService.CacheService : HTSService
- (void)loadResWithId:url:pathExtension:callback:;
- (unsigned long long)expiredFileSize;
- (void)cleanExpiredFile;
- (void)cleanAllCache;
- (unsigned long long)cacheSize;
- (id)init;
- (id)cachePath;
- (void).cxx_destruct;
- (id)saveData:fileName:;
@end
