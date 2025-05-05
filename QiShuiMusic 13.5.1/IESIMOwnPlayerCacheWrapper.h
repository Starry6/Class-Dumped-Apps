@interface IESIMOwnPlayerCacheWrapper : NSObject
- (void)clearAllCache;
- (void)getCacheFileByKey:completionBlock:;
- (double)getCacheForSizeKey:;
- (void)getCacheSizeWithCompletion:;
- (void)hasCacheForVideoID:URLString:completion:;
- (BOOL)hasEnoughCacheForURLString:videoDuration:networkSpeed:;
- (void)setCacheSizeLimit:;
+ (id)sharedCache;
@end
