@interface GEOMuninTileRequester : GEOSimpleTileRequester
- (BOOL)shouldReportAnalyticsOnErrorWithRetryForTileKey:;
- (id)tileSetForKey:;
- (id)kindForTileKey:;
- (BOOL)shouldReportAnalyticsOnErrorForTileKey:;
- (id)urlForTileKey:;
- (BOOL)shouldReportAnalyticsOnSuccessForTileKey:;
- (id)activeTileSetForKey:;
- (id)additionalAnalyticsStatesForKey:;
- (unsigned int)tileEditionForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
