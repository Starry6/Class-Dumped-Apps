@interface IESIMSysPlayerCacheWrapper : NSObject
- (void)clearAllCache;
- (void)getCacheSizeWithCompletion:;
- (void)hasCacheForVideoID:URLString:completion:;
- (BOOL)hasEnoughCacheForURLString:videoDuration:networkSpeed:;
- (void)setCacheKeyParserBlock:;
- (void)setCacheReportBlock:;
- (void)setCacheSizeLimit:;
- (id)init;
+ (id)sharedCache;
@end
