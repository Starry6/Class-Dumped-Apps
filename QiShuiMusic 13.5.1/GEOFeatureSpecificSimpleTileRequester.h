@interface GEOFeatureSpecificSimpleTileRequester : GEOVoltaireTileRequester
- (id)_regularTileKeyForTransitLineSelectionTileKey:muid:;
- (id)_localizationURLForTileKey:;
- (id)kindForTileKey:;
- (id)urlForTileKey:;
- (BOOL)tileDataIsCacheableForTileKey:;
- (id)activeTileSetForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
