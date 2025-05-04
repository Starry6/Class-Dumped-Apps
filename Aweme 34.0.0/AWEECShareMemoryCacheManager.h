@interface AWEECShareMemoryCacheManager : NSObject
@property (nonatomic) NSMutableDictionary cacheDic;
- (id)cacheDic;
- (id)buideCacheWithScene:;
- (id)buildCacheItemWithScene:key:value:;
- (id)getShareCacheItemWithScene:key:;
- (void)setShareCacheWithScene:key:value:;
- (id)getShareCacheWithScene:;
- (BOOL)hitCacheWithScene:key:;
- (void)setCacheDic:;
- (void).cxx_destruct;
+ (id)shared;
@end
