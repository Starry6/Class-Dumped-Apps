@interface IESIMVideoPreloadInfoCache : NSObject
@property (nonatomic) NSCache modernPreloadedSizeCache;
- (id)mediaSizeForVideoID:;
- (id)modernPreloadedSizeCache;
- (id)preloadedSizeForVideoID:;
- (void)savePreloadSize:mediaSize:urlString:forVideoID:;
- (void)setModernPreloadedSizeCache:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
