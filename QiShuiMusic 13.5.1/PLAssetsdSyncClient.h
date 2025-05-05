@interface PLAssetsdSyncClient : PLAssetsdBaseClient
- (void)updateRestoredAssetWithUUID:paths:fixAddedDate:;
- (void)finalizeOTARestoreRecreatingAlbums:;
@end
