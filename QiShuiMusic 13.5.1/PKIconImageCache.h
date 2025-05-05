@interface PKIconImageCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> cacheAccessQueue;
@property (nonatomic) NSDictionary iconCache;
- (id)allImageIconKeys;
- (id)iconCache;
- (id)cacheAccessQueue;
- (void).cxx_destruct;
- (void)setCacheAccessQueue:;
- (id)initWithPath:scale:;
- (void)setIconCache:;
- (id)imageForKey:;
+ (id)settingsIconCache;
+ (id)settingsIconCacheWithScale:;
@end
