@interface LPAPFSVolume : LPMedia
- (BOOL)isEncrypted;
- (id)container;
- (int)role;
- (BOOL)isMounted;
- (BOOL)createSnapshot:error:;
- (BOOL)setRole:withError:;
- (id)volumeGroupUUID;
- (BOOL)isCaseSenstive;
- (BOOL)isFilevaultEncrypted;
- (id)pairedVolume;
- (id)snapshotMountPoints;
- (BOOL)eraseVolumeWithError:;
- (BOOL)mountWithError:;
- (BOOL)mountAtPath:error:;
- (id)_createTemporaryMountPointWithError:;
- (id)mountAtTemporaryPathWithError:;
- (id)mountAtTemporaryPathWithOptions:error:;
- (BOOL)mountAtPath:options:error:;
- (BOOL)unmountWithError:;
- (BOOL)unmountWithOptions:error:;
- (BOOL)unmountAllWithError:;
- (BOOL)deleteVolumeWithError:;
- (id)snapshotsWithError:;
- (id)snapshotInfoWithError:;
- (BOOL)deleteSnapshots:waitForDeletionFor:error:;
- (BOOL)renameSnapshot:to:error:;
- (BOOL)revertToSnapshot:error:;
- (BOOL)revertToSnapshot:options:error:;
- (BOOL)rootToSnapshot:error:;
+ (id)supportedContentTypes;
+ (void)_loadMountPointTableForMode:;
+ (id)defaultMountPointGivenRole:;
+ (id)defaultVolumeNameGivenRole:;
@end
