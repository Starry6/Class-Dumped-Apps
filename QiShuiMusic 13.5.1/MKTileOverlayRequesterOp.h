@interface MKTileOverlayRequesterOp : NSObject
@property (nonatomic) {_GEOTileKey=b7b1(?={_GEOStandardTileKey=b40b6b26b26b14b4b4}{_GEOGloriaQuadIDTileKey=b6b64b14b36}{_GEORegionalResourceKey=b32b8b6b8b8b1b57}{_GEOSputnikMetadataKey=b32b24b14b8b42}{_GEOFlyoverKey=b6b26b26b8b24b14b8b8}{_GEOTransitLineSelectionKey=b6b25b25b64}{_GEOPolygonSelectionKey=b6b25b25b64}{_GEOTileOverlayKey=b6b26b26b8b32b16b6}{_GEOIdentifiedResourceKey=QCCb1b39}{_GEOMuninMeshKey=b64b32b16b5b3}{_GEOVisualLocalizationTrackKey=SCb16b6b26b26b22}{_GEOVisualLocalizationMetadataKey=b6b9b25b6b26b26b22}{_GEOVisualLocalizationDataKey=QCb5b21b21b1}{_GEOS2TileKey=b6b26b26b3b14b4b4b37})} key;
@property (nonatomic) _MKOverlayTileRequester delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) @ data;
- (id)init;
- (void)cancel;
- (void)start;
- (id)data;
- (void)setDelegate:;
- (id)key;
- (void)_cancel;
- (id)delegateQueue;
- (void)setKey:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_start;
- (void)setData:;
- (void)setDelegateQueue:;
@end
