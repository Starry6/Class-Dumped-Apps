@interface CSJLOTFileCache : NSObject
@property (nonatomic) NSFileManager fileManager;
@property (nonatomic) NSObject<OS_dispatch_queue> ioQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cacheFileWithData:key:;
- (double)expirationTimeInterval;
- (id)fileCacheDirectory;
- (id)fileCacheWithKey:error:;
- (id)filePathWithKey:;
- (long long)maxDiskCacheSize;
- (id)md5HexDigest:;
- (void)removeExpiredDataAction;
- (id)fileManager;
- (id)init;
- (void)dealloc;
- (void)setFileManager:;
- (void).cxx_destruct;
- (id)ioQueue;
- (void)setIoQueue:;
- (void)removeExpiredData;
@end
