@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader
- (BOOL)isExportable;
- (id)assetInspector;
- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:keysForCollectionKeys:completionHandler:;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (void)loadValuesAsynchronouslyForKeys:completionHandler:;
- (id)lyrics;
- (long long)statusOfValueForKey:error:;
- (BOOL)isReadable;
- (id)duration;
- (BOOL)isEqual:;
- (id)initWithAssetInspector:;
@end
