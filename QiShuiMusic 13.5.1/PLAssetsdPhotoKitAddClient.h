@interface PLAssetsdPhotoKitAddClient : PLAssetsdBaseClient
- (id)clientName;
- (BOOL)sendChangesRequest:error:;
- (void)sendChangesRequest:reply:;
@end
