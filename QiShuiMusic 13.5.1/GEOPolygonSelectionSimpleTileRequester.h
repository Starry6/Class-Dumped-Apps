@interface GEOPolygonSelectionSimpleTileRequester : GEOVoltaireTileRequester
- (id)_regularTileKeyForPolygonSelectionSelectionTileKey:polyId:;
- (id)_localizationURLForTileKey:;
- (id)kindForTileKey:;
- (id)urlForTileKey:;
- (BOOL)tileDataIsCacheableForTileKey:;
- (id)activeTileSetForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
