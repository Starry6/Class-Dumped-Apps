@interface AWEIMLiteImageCache : NSObject
@property (nonatomic) YYMemoryCache cache;
- (id)accessCacheWithImageName:inBundle:;
- (BOOL)writeCacheOfImage:withImageName:inBundle:;
- (id)p_generateMainCache;
- (id)p_keyForImageName:bundleName:;
- (BOOL)p_shouldCacheImage:;
- (unsigned int)p_memoryCostOfUIImage:;
- (BOOL)p_shouldTrack;
- (id)noticeImageNamed:;
- (id)accessImageWithName:inBundle:missCacheBlock:;
- (id)concernImageNamed:;
- (BOOL)writeCacheWithContext:;
- (id)accessCacheWithContext:;
- (void)p_trackCacheReadIfNecessaryWithImageName:bundleName:resultImage:;
- (void)p_trackCacheWriteIfNecessaryWithImageName:bundleName:inputImage:cacheSuccess:;
- (id)p_commonTrackParamWithImageName:bundleName:image:;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
