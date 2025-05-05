@interface PLAssetsdResourceInternalService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)batchSaveAssetJobs:reply:;
- (void)asynchronousMasterThumbnailForAssetUUID:reply:;
- (id)initWithLibraryServicesManager:trustedCallerBundleID:;
@end
