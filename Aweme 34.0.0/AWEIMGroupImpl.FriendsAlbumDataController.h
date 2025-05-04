@interface AWEIMGroupImpl.FriendsAlbumDataController : NSObject
- (long long)friendsAlbumStateForMessage:;
- (id)friendsAlbumMessageExtStateKey;
- (id)friendsAlbumMessageExtMediaIDKey;
- (BOOL)isSupportFriendsAlbumMessage:;
- (BOOL)isSupportFriendsAlbumCon:;
- (long long)friendsAlbumStateForIESMessage:;
- (long long)permissionForCon:;
- (BOOL)hasRemovePermissionForCon:message:assetModel:;
- (void)updatePermission:con:completion:;
- (BOOL)hasEntrancePermissionForCon:;
- (BOOL)hasRemovePermissionForCon:iesMessage:assetModel:;
- (void)fetchAssetWithCid:mediaIds:extraParams:completion:;
- (void)fetchAssetWithCid:cursor:limit:extraParams:completion:;
- (void)removeAssetWithCid:mediaId:extraParams:completion:;
- (void)addAssetWithCid:sourceInfo:extraParams:completion:;
- (id)init;
- (void).cxx_destruct;
@end
