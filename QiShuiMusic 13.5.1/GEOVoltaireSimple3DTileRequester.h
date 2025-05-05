@interface GEOVoltaireSimple3DTileRequester : GEOSimpleTileRequester
- (BOOL)shouldDownloadToDiskForTileKey:estimatedDataSize:;
- (id)tileSetForKey:;
- (id)kindForTileKey:;
- (id)urlForTileKey:;
- (id)activeTileSetForKey:;
- (unsigned int)tileEditionForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
