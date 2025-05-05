@interface PLAssetsdPhotoKitAddService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clientDescription;
- (id)persistentStoreCoordinator;
- (void)dealloc;
- (id)clientBundleID;
- (id)initWithLibraryServicesManager:connectionAuthorization:;
- (id)clientDisplayName;
- (void).cxx_destruct;
- (void)applyChangesRequest:reply:;
- (void)commitRequest:reply:;
- (BOOL)validatePhotosAccessScopeForChangesRequest:;
@end
