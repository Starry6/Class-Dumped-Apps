@interface AWEIMMsgRefreshStorage : NSObject
@property (nonatomic) NSCache memoryCache;
- (id)getObjectWith:;
- (void)setObjectForKey:value:;
- (id)p_memeryCacheObjectForKey:;
- (id)p_storageCacheObjectForKey:;
- (void)p_setMemeryCacheObject:forKey:;
- (void)p_setStorageCacheObject:forKey:;
- (id)memoryCache;
- (void).cxx_destruct;
- (void)setMemoryCache:;
+ (id)getUniqueKey:uniqueId:;
+ (id)sharedInstance;
@end
