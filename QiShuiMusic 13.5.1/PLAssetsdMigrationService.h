@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLibraryServicesManager:;
- (void).cxx_destruct;
- (void)cleanupModelForDataMigrationForRestoreType:reply:;
- (void)dataMigrationWillFinishWithReply:;
- (void)moveiPhotoLibraryMediaWithReply:;
- (void)_migrateWellknownLibraries;
+ (id)photosFileProviderManagerDocumentStorageURL:;
+ (BOOL)applyBackupExclusionToFileProviderDocumentStorage:;
@end
