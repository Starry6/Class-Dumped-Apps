@interface GEOGloriaQuadIDTileRequester : GEOSimpleTileRequester
- (BOOL)downloadsDataToDisk;
- (BOOL)shouldReportAnalyticsOnErrorWithRetryForTileKey:;
- (BOOL)shouldReportAnalyticsOnErrorForTileKey:;
- (id)urlForTileKey:;
- (BOOL)_shouldReportAnalyticsForTileKey:;
- (BOOL)shouldReportAnalyticsOnSuccessForTileKey:;
- (id)activeTileSetForKey:;
- (id)processTileData:forKey:error:;
+ (unsigned char)tileProviderIdentifier;
@end
