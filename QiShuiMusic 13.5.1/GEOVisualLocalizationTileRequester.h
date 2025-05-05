@interface GEOVisualLocalizationTileRequester : GEOSimpleTileRequester
- (BOOL)downloadsDataToDisk;
- (id)kindForTileKey:;
- (id)urlForTileKey:;
- (id)activeTileSetForKey:;
- (id)additionalAnalyticsStatesForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
