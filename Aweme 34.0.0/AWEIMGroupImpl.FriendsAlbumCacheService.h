@interface AWEIMGroupImpl.FriendsAlbumCacheService : NSObject
- (long long)friendsAlbumPreloadCounts;
- (id)preloadAssetsModelsForCid:;
- (void)removePreloadAssetsModelsForCid:;
- (void)updatePreloadAssetsModelsForCid:assetsModels:;
- (id)makeCacheModel;
- (void)storeCacheModel:;
- (id)cacheModelForIdentifier:;
- (BOOL)supportRefreshWithComponentCenter:;
- (id)refreshHandlerWithComponentCenter:;
- (id)init;
- (void).cxx_destruct;
@end
