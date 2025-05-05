@interface AVStreamDataAsset : AVAsset
- (id)tracks;
- (void)dealloc;
- (id)_formatReader;
- (Class)_classForTrackInspectors;
- (void).cxx_destruct;
- (id)parser;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (id)initWithParser:tracks:;
- (id)copyAssetWithAdditionalTrackID:mediaType:;
- (id)copyAssetWithReplacementFormatDescription:forTrackID:;
- (id)copyAssetRemovingTrackID:;
- (id)mediaTypeForTrackID:;
- (id)formatDescriptionsForTrackID:;
@end
