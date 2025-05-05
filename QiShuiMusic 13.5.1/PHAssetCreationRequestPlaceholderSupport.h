@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest
@property (nonatomic) NSXPCConnection clientConnection;
- (id)clientConnection;
- (void).cxx_destruct;
- (id)initWithXPCDict:request:clientAuthorization:;
- (void)changeFailedOnClientWithLibrary:error:;
- (void)changeFailedOnDaemonWithLibrary:error:;
- (void)performTransactionCompletionHandlingInPhotoLibrary:;
- (BOOL)validateInsertIntoPhotoLibrary:error:;
- (id)createManagedObjectForInsertIntoPhotoLibrary:error:;
- (id)initForNewObjectWithUUID:;
- (unsigned short)_bundleScopeForPlaceholderAsset;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:inPhotoLibrary:error:;
- (void)_updateManagedAssetAfterResourceDownload:;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType:;
@end
