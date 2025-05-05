@interface MSASPendingChanges : NSObject
@property (nonatomic) NSMutableSet pendingAlbumGUIDsWithKeyValueChanges;
@property (nonatomic) NSMutableSet pendingAlbumChanges;
@property (nonatomic) NSMutableSet pendingAlbumGUIDsWithSharingInfoChanges;
@property (nonatomic) NSMutableDictionary pendingAlbumGUIDToAssetCollections;
- (BOOL)hasPendingChanges;
- (void).cxx_destruct;
- (id)initWithSyncedKeyValueChangesForAlbumGUIDS:albumChanges:accessControlChangesForAlbumGUIDS:;
- (void)removePendingKeyValueChangesForAlbumGUID:;
- (void)addPendingChangesForAlbumGUID:;
- (void)removePendingChangesForAlbumGUID:;
- (void)addPendingAssetCollectionChanges:forAlbumGUID:;
- (void)removePendingAssetCollection:forAlbumGUID:;
- (void)removePendingSharingInfoChangesForAlbumGUID:;
- (id)pendingAlbumGUIDsWithKeyValueChanges;
- (void)setPendingAlbumGUIDsWithKeyValueChanges:;
- (id)pendingAlbumChanges;
- (void)setPendingAlbumChanges:;
- (id)pendingAlbumGUIDsWithSharingInfoChanges;
- (void)setPendingAlbumGUIDsWithSharingInfoChanges:;
- (id)pendingAlbumGUIDToAssetCollections;
- (void)setPendingAlbumGUIDToAssetCollections:;
@end
