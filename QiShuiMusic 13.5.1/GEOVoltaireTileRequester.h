@interface GEOVoltaireTileRequester : GEOSimpleTileRequester
- (id)_localizationURLForTileKey:;
- (BOOL)shouldDownloadToDiskForTileKey:estimatedDataSize:;
- (BOOL)needsLocalizationForKey:;
- (int)checksumMethodForIncomingTileDataWithKey:;
- (id)_deviceRegionSKUQueryItemForTileSet:;
- (id)urlForTileKey:;
- (id)localizationURLForTileKey:;
- (void)failedLoadingTileForKey:baseOperation:error:;
- (BOOL)shouldAllowEmptyDataForTileKey:;
- (id)activeTileSetForKey:;
- (id)additionalAnalyticsStatesForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
