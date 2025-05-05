@interface VKMercatorTerrainHeightCache : NSObject
@property (nonatomic) <VKMercatorTerrainHeightProvider> heightProvider;
- (void).cxx_destruct;
- (id).cxx_construct;
- (double)heightForAnchor:;
- (void)removeCachedValueForAnchor:;
- (void)invalidateRect:;
- (id)heightProvider;
- (void)setHeightProvider:;
@end
