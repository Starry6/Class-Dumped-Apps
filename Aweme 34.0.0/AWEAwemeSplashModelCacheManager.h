@interface AWEAwemeSplashModelCacheManager : HTSService
@property (nonatomic) NSMutableDictionary splashModelCacheDictonary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearSplashModelCache;
- (void)splashWillAppearWithModel:;
- (id)splashModelCacheDictonary;
- (void)setSplashModelCacheDictonary:;
- (id)init;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (void)setObject:forKey:;
@end
