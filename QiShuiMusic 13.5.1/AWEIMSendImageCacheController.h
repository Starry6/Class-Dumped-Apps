@interface AWEIMSendImageCacheController : NSObject
@property (nonatomic) NSCache memoryCache;
@property (nonatomic) q sequence;
- (void)cacheImage:uniqueId:;
- (void)clearAllCache;
- (void)removeImageForUniqueId:;
- (id)requestImageWithUniqueId:;
- (id)init;
- (void)setSequence:;
- (id)memoryCache;
- (void).cxx_destruct;
- (long long)sequence;
- (void)setMemoryCache:;
+ (id)sharedInstance;
@end
