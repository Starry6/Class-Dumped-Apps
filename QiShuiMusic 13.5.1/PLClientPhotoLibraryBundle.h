@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle
- (void)setCloudPhotoLibraryEnabled:;
- (void)_invalidateClientSandboxExtensionCache;
- (id)transferPersons:toBundle:options:completion:;
- (id)newChangePublisher;
- (void)close;
- (void)_initClientSandboxExtensionCache;
- (id)clientSandboxExtensionCache;
- (id)transferAssets:toBundle:options:completion:;
- (void)setPhotoStreamEnabled:;
- (void).cxx_destruct;
- (id)newAssetsdClient;
- (void)setSharedAlbumEnabled:;
- (id)newLibraryServicesManager;
- (id)initWithLibraryURL:bundleController:;
- (void)resetClientSandboxExtensionCache;
- (id)newBoundAssetsdServicesTable;
@end
