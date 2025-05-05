@interface PLAssetsdResourceService : PLAssetsdResourceWriteOnlyService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fileDescriptorForPersistentURL:withAdjustments:reply:;
- (void)asynchronousAdjustmentDataForAsset:networkAccessAllowed:reply:;
- (id)initWithLibraryServicesManager:connectionAuthorization:resourceDownloader:;
- (void)translatePersistentURL:withAdjustments:handler:;
- (void)saveAssetWithDataAndPorts:imageSurface:previewImageSurface:reply:;
- (void)addAssetGroupWithName:reply:;
- (void)getSandboxExtensionForFileSystemBookmark:reply:;
- (void).cxx_destruct;
- (void)downloadCloudSharedAsset:wantedPlaceholderkind:shouldPrioritize:shouldExtendTimer:reply:;
- (void)addAssetWithURL:toAlbum:reply:;
- (id)consolidateAssets:reply:;
- (void)estimatedFileLengthOfVideo:fallbackFilePath:exportPreset:exportProperties:reply:;
- (void)getSandboxExtensionsForAssetWithUUID:reply:;
- (void)projectExtensionDataForProjectUuid:reply:;
- (void)filePathForPersistentURL:withAdjustments:reply:;
- (void)updateInternalResourcePath:objectURI:sandboxExtension:reply:;
- (void)imageDataForAssetWithObjectURI:formatID:allowPlaceholder:wantURLOnly:networkAccessAllowed:trackCPLDownload:reply:;
- (BOOL)_consolidateResource:assetUUID:bundleScope:error:;
- (id)_typeFromPathConstrainedToImageOrMovie:;
@end
