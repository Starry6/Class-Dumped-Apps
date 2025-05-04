@interface AWEAudioUtilities : NSObject
+ (id)cachedRootDirectory;
+ (id)p_getMD5WithString:;
+ (id)cachedPathForUrl:;
+ (id)cachedPathForMusic:;
+ (void)clearAudioCache;
+ (id)detectAudioFileTypeFromURL:;
+ (id)videoEngingeCacheKey:;
@end
