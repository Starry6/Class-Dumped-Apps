@interface TTAdSplashCache : NSObject
@property (nonatomic) NSMutableDictionary cacheDictionary;
@property (nonatomic) NSMutableDictionary topViewCacheDictionary;
@property (nonatomic) double defaultTimeoutInterval;
@property (nonatomic) NSObject<OS_dispatch_queue> ioQueue;
- (id)imageInfoModelCachePathIfExist:;
- (void)removeItemFromCache:updateSize:;
- (void)addCacheDictObj:key:;
- (void)addTopViewCacheDictObj:key:;
- (void)calculateSizeWithCompletionBlock:;
- (void)clearResource;
- (void)clearResourceRegularly;
- (BOOL)clearTopViewResource;
- (id)dataForKey:type:;
- (id)dataForUrl:;
- (void)deleteDataAtPath:;
- (void)deletePreloadKeyForSplashAdid:;
- (id)fileCachePathIfExist:;
- (id)filePathIfExist:type:;
- (unsigned long long)getDiskCount;
- (id)getRealKeyWithKey:type:;
- (void)initTopViewCacheDict;
- (BOOL)isCacheExist:;
- (BOOL)isCacheExist:type:;
- (BOOL)isCacheExistWithMD5Key:;
- (id)preloadKeyForSplashAdId:;
- (id)preloadVideoInfoForSplashAdId:;
- (id)realTimeDataForUrl:;
- (void)removeCacheDictItemForKey:;
- (void)removeCacheWithFileName:;
- (void)removeTopViewCacheDictItemForKey:;
- (void)saveCacheDictionary;
- (void)setCacheDictionary:;
- (void)setData:forKey:expires:;
- (void)setData:forKey:expires:type:;
- (void)setData:forMD5Key:withTimeoutInterval:;
- (void)setData:forVideoId:expires:;
- (void)setPreloadVideoInfo:forSplashAdId:withTimeoutInterval:;
- (void)setTopViewCacheDictionary:;
- (id)topViewCacheDictionary;
- (void)updateResourceExpiresWithKey:expires:type:;
- (id)cachePath;
- (void)clearCache;
- (id)init;
- (void)dealloc;
- (void)writeData:toPath:;
- (void).cxx_destruct;
- (void)setDefaultTimeoutInterval:;
- (double)defaultTimeoutInterval;
- (void)saveAfterDelay;
- (unsigned long long)getSize;
- (id)ioQueue;
- (void)setIoQueue:;
- (id)cacheDictionary;
+ (id)cachePath4VideoWithVideoId:;
+ (BOOL)hasCacheSize;
+ (BOOL)isRealTimeVideoCacheExistWithVideoId:;
+ (BOOL)isVideoCacheExistWithVideoId:;
+ (void)reCalculateCacheSize;
+ (float)cacheSize;
+ (id)sharedCache;
@end
