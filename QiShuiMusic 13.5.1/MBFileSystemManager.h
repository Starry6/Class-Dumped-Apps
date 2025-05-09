@interface MBFileSystemManager : NSObject
@property (nonatomic) NSString fileSystemType;
@property (nonatomic) NSString mountPoint;
@property (nonatomic) BOOL shouldRestoreFilesSparse;
@property (nonatomic) BOOL supportsLocalSnapshots;
@property (nonatomic) BOOL supportsSparseFiles;
@property (nonatomic) NSString currentSnapshotPath;
@property (nonatomic) NSString currentSnapshotName;
- (id)mountPoint;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMountPoint:;
- (BOOL)shouldRestoreFilesSparse;
- (BOOL)_fileSystemSupportsSnapshots;
- (BOOL)_fileSystemSupportsSparseFiles;
- (id)_snapshotName:;
- (BOOL)snapshotFilesystemWithSnapshotName:error:cancelationHandler:;
- (BOOL)snapshotFilesystemWithSnapshotID:error:cancelationHandler:;
- (BOOL)removeSnapshot:withError:;
- (id)_removeFileSystemSnapshotsWithBlock:;
- (BOOL)removeAllBackupSnapshotsWithLatestCreationDate:error:;
- (BOOL)removeAllBackupSnapshots:;
- (void)removeAllBackupInternalSnapshots;
- (void)removeAllBackupInternalSnapshotsCreatedBeforeDate:;
- (void)removeDriveBackupSnapshotsWithLatestCreationDate:;
- (BOOL)mountSnapshot:atMountPoint:withError:;
- (BOOL)unmountCurrentSnapshotFromMountPoint:andRemoveIt:withError:;
- (BOOL)unmountCurrentSnapshotAndRenameToInternalArchive:;
- (BOOL)supportsLocalSnapshots;
- (BOOL)supportsSparseFiles;
- (id)currentSnapshotPath;
- (id)currentSnapshotName;
- (id)fileSystemType;
- (void)setFileSystemType:;
+ (void)removeStaleCleanUpDirectory;
+ (BOOL)stopFilesystemKeyRollingWithPath:error:;
+ (BOOL)unmountSnapshotFromMountPoint:error:;
+ (id)managerWithMountPoint:;
+ (BOOL)startFilesystemKeyRollingWithPath:error:;
+ (id)volumeUUIDWithVolumeMountPoint:error:;
+ (unsigned long long)removeRestorePrefetchCacheAtPath:earliestDate:;
+ (unsigned long long)removeRestorePrefetchCacheAtPath:;
+ (id)listAllSnapshotsAtPath:error:;
+ (void)removeDeviceTransferDirectoryWithEarliestCreationDate:;
+ (unsigned long long)fileSystemCapacity;
@end
