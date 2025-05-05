@interface IESLiveAudioCache : NSObject
@property (nonatomic) NSOperationQueue diskOperationQueue;
@property (nonatomic) NSMutableDictionary cacheDictionary;
@property (nonatomic) double defaultTimeout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)copyFilePath:asKey:withTimeout:;
- (BOOL)hasCacheForKey:;
- (id)cacheDir;
- (void)copyFilePath:asKey:;
- (void)deleteDataAtPath:;
- (id)diskOperationQueue;
- (void)performDiskWriteOperation:;
- (void)removeCacheWithTimeout;
- (void)saveCacheDictionary;
- (void)setCacheDictionary:;
- (void)setDefaultTimeout:;
- (void)setDiskOperationQueue:;
- (void)clearCache;
- (id)init;
- (id)filePathForKey:;
- (void)removeItemFromCache:;
- (void).cxx_destruct;
- (void)saveAfterDelay;
- (double)defaultTimeout;
- (id)cacheDictionary;
@end
