@interface GEOIdentifiedMapDataRequester : GEOSimpleTileRequester
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldDownloadToDiskForTileKey:estimatedDataSize:;
- (int)checksumMethodForIncomingTileDataWithKey:;
- (id)urlForTileKey:;
- (id)activeTileSetForKey:;
- (id)_urlComponentsForKey:url:;
+ (id)tileSetForKey:;
+ (unsigned char)tileProviderIdentifier;
@end
