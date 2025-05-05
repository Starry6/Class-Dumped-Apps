@interface IESECMemoryCache : NSObject
@property (nonatomic) YYMemoryCache innerCache;
@property (nonatomic) NSCache iconImageCache;
- (void)appDidReceiveMemoryWarningNotification;
- (void)cacheIconImage:key:;
- (void)cacheObject:key:cost:timeout:;
- (id)cachedIconImageForKey:;
- (id)cachedObjectForKey:type:;
- (id)innerCache;
- (void)setInnerCache:;
- (void)clearCache;
- (void)dealloc;
- (void)setIconImageCache:;
- (id)iconImageCache;
- (void).cxx_destruct;
- (void)clearCacheForKey:;
+ (id)generateVerboseKeyWithKey:addition:;
+ (id)shared;
@end
