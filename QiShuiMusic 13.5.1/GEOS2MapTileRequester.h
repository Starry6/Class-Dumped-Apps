@interface GEOS2MapTileRequester : GEOSimpleTileRequester
- (id)_localizationURLForTileKey:;
- (BOOL)shouldDownloadToDiskForTileKey:estimatedDataSize:;
- (id)urlForTileKey:;
- (id)activeTileSetForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
