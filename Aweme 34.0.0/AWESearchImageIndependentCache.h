@interface AWESearchImageIndependentCache : NSObject
@property (nonatomic) BDImageCache cache;
- (void)setCache:;
- (id)cache;
- (void).cxx_destruct;
+ (BOOL)enableImageIndependentCache;
+ (id)generalSearchImageIndependentCacheName;
+ (id)cacheConfigInfo;
+ (void)registerGeneralSearchImageCache;
@end
