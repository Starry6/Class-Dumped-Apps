@interface PLAssetsdMigrationClient : PLAssetsdBaseClient
- (void)cleanupModelForDataMigrationForRestoreType:;
- (void)moveiPhotoLibraryMediaWithReply:;
- (void)dataMigrationWillFinish;
@end
