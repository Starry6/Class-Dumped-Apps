@interface GEOVoltaireSputnikMetadataTileRequester : GEOSimpleTileRequester
- (id)tileSetForKey:;
- (id)kindForTileKey:;
- (id)urlForTileKey:;
- (id)activeTileSetForKey:;
- (unsigned int)tileEditionForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
