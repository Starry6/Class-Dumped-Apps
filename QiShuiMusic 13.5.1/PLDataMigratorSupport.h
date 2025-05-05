@interface PLDataMigratorSupport : NSObject
@property (nonatomic) PLPhotoLibraryPathManager pathManager;
- (id)pathManager;
- (id)initWithPathManager:;
- (void).cxx_destruct;
- (void)recordDataMigrationInfo:;
- (void)removeModelInterestDatabase;
- (void)removeInternalMemoriesRelatedSnapshotDirectory;
- (void)removeAsidePhotosDatabase;
- (void)removeLegacyMetadataFiles;
@end
