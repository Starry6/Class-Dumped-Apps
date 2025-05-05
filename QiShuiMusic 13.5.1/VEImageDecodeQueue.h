@interface VEImageDecodeQueue : IESMMObject
@property (nonatomic) NSMutableArray bufferCache;
@property (nonatomic) q maxCacheCount;
@property (nonatomic) NSObject<OS_dispatch_queue> decodeQueue;
- (id)decodeQueue;
- (id)fetchImageBufferByKey:;
- (long long)maxCacheCount;
- (long long)p_findBufferIndexByKey:;
- (void)p_registerMemoryWarningNotify;
- (void)returnBufferToCache:;
- (void)setMaxCacheCount:;
- (id)init;
- (void).cxx_destruct;
- (id)bufferCache;
- (void)setBufferCache:;
- (void)flushCaches;
+ (id)shareInstance;
@end
