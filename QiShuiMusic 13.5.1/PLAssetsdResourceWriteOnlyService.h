@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService
@property (nonatomic) PLAssetsdConnectionAuthorization connectionAuthorization;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)saveAssetWithDataAndPorts:imageSurface:previewImageSurface:reply:;
- (id)initWithLibraryServicesManager:connectionAuthorization:;
- (void).cxx_destruct;
- (void)saveAssetWithDataAndPorts:clientConnection:imageSurface:previewImageSurface:reply:;
- (id)connectionAuthorization;
@end
