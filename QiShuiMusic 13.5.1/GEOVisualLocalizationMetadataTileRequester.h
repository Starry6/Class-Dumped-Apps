@interface GEOVisualLocalizationMetadataTileRequester : GEOSimpleTileRequester
- (BOOL)downloadsDataToDisk;
- (id)kindForTileKey:;
- (id)urlForTileKey:;
- (id)activeTileSetForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
