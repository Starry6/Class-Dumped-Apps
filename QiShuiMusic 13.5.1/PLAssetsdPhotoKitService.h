@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clientDescription;
- (id)persistentStoreCoordinator;
- (void)dealloc;
- (id)clientBundleID;
- (void)executeQueryForSyncManager:type:startDate:endDate:itemHandler:completionHandler:;
- (id)initWithLibraryServicesManager:connectionAuthorization:;
- (id)clientDisplayName;
- (void).cxx_destruct;
- (void)executeQueryForSyncManager:type:startDate:endDate:batchHandler:completionHandler:;
- (void)applyChangesRequest:reply:;
- (void)getUUIDsForCloudIdentifiers:reply:;
- (void)getUUIDsForAssetObjectURIs:filterPredicate:reply:;
- (void)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:bundleID:processingTypes:reply:;
- (void)processUniversalSearchJITForAssetUUID:processingTypes:reply:;
- (void)_processUniversalSearchJITForAsset:cssiUniqueIdentifier:bundleID:processingTypes:completion:;
- (void)commitRequest:reply:;
@end
