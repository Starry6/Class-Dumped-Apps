@interface AWENearbyAwemeCacheManager : NSObject
@property (nonatomic) AWEStorage cacheStorage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (BOOL)enableNearbyFeedCache;
- (id)p_cachedAwemesFromOrigianlCache:;
- (id)aAWENearbyAwemeCacheManagerCommonAdapter;
- (void)clearAwemeCache;
- (id)__hotWordStringWithAwemeModel:;
- (id)cachedNearbyAwemesForCity:;
- (id)cachedEntriesForCity:;
- (void)setNearbyAwemeCache:forCity:;
- (void)clearNearbyCache;
- (void)saveHotWordsWithAwemeModel:;
- (BOOL)isEqualToLocalHotWordsWithAwemeModel:;
- (id)cacheStorage;
- (void)setCacheStorage:;
- (id)cacheKey;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (Class)aAWENearbyAwemeCacheManagerCommonAdapterClass;
+ (id)sharedManager;
@end
