@interface GEOMapFeatureTileFinder : NSObject
@property (nonatomic) BOOL allowStaleData;
- (BOOL)allowStaleData;
- (void).cxx_destruct;
- (void)setAllowStaleData:;
- (id)initWithZoomLevel:tileSize:tileScale:tileSetStyle:tileLoader:;
- (void)setExistingRequest:;
- (id)tileKeyWithX:y:;
- (id)findTileWithKey:allowNetwork:queue:handler:completionHandler:;
- (id)findTilesAround:radius:allowNetwork:queue:handler:completionHandler:;
- (id)preloadTilesAround:radius:preloadToDiskOnly:queue:completionHandler:;
- (id)_tileFinderRequest;
- (id)_findTilesInList:allowNetwork:preloadToDiskOnly:queue:handler:completionHandler:;
- (id)_tileLoaderClientIdentifier;
@end
