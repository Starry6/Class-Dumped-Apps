@interface CSJAdFileCache : NSObject
@property (nonatomic) CSJAdFileCacheConfig cacheConfig;
@property (nonatomic) NSObject<OS_dispatch_queue> ioQueue;
@property (nonatomic) NSString currentCacheParentDir;
- (id)_prx_arraySortedByModifyDateASC;
- (void)setCacheConfig:;
- (void)_prx_LRU_clear;
- (void)_prx_LRU_clear_useFileCount;
- (void)_prx_LRU_clear_useSize;
- (id)_prx_cacheParentDir;
- (void)_prx_createIfNeedWithDirectoryFullPath:;
- (id)_prx_currentCacheParentDir;
- (void)_prx_updateModifyDateWithKey:;
- (id)cacheConfig;
- (void)clearAllCache;
- (id)currentCacheParentDir;
- (void)dataWithKey:completionBlock:;
- (void)existWithKey:completionBlock:;
- (id)initWithCacheConfig:;
- (void)setCurrentCacheParentDir:;
- (void)setData:withKey:;
- (void).cxx_destruct;
- (id)ioQueue;
- (void)setIoQueue:;
- (void)_logWithFormat:;
+ (id)parentDirectoryName;
@end
