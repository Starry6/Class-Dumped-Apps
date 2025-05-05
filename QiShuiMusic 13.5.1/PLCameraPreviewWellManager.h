@interface PLCameraPreviewWellManager : NSObject
- (void)_saveImageAndNotify:assetUUID:;
- (void)_processChange:;
- (id)initWithLibraryServicesManager:;
- (void)considerAssetForPreviewWellChanges:thumbnailWasGenerated:;
- (void).cxx_destruct;
- (void)_clearPreviewWellAndNotify;
- (void)_inqProcessAssetChanges;
- (void)refreshPreviewWellImage;
- (void)_inqFetchPreviewWellMetadataIfNeededCurrentPreviewIsStale:;
- (void)_fetchPreviewWellAssetWithAssetHandler:;
@end
