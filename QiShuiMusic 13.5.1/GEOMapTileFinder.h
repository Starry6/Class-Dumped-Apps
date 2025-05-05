@interface GEOMapTileFinder : GEOMapRequest
@property (nonatomic) @? tileHandler;
@property (nonatomic) GEOMapAccess map;
@property (nonatomic) Q zoomLevel;
@property (nonatomic) NSInteger tileSize;
@property (nonatomic) NSInteger tileScale;
@property (nonatomic) NSInteger tileStyle;
- (unsigned long long)zoomLevel;
- (void)cancel;
- (void)dealloc;
- (int)tileSize;
- (void).cxx_destruct;
- (id)map;
- (id)_initWithMap:zoomLevel:tileSize:tileScale:tileStyle:center:radius:;
- (void)_fetchDataForKeys:;
- (void)findTiles:excludingKey:;
- (void)findTilesAdjacentToTile:containingPoint:tileHandler:;
- (void)findTiles:;
- (id)_adjacentTileKey:dirX:dirY:;
- (id)tileHandler;
- (void)setTileHandler:;
- (int)tileScale;
- (int)tileStyle;
+ (id)realisticTileFinderForMap:center:radius:;
+ (id)detailedTransitTileFinderForMap:center:radius:;
+ (id)transitGeometryTileFinderForMap:center:radius:;
+ (id)buildingsTileFinderForMap:center:radius:;
@end
