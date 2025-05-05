@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient
- (id)clientName;
- (id)getUUIDsForAssetObjectIDs:filterPredicate:context:error:;
- (id)getUUIDsForCloudIdentifiers:error:;
- (BOOL)sendChangesRequest:error:;
- (void)sendChangesRequest:reply:;
- (BOOL)processUniversalSearchJITForAssetUUID:processingTypes:error:;
- (id)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:bundleID:processingTypes:error:;
+ (BOOL)inTransactionProxy;
+ (BOOL)sendChangesRequest:usingProxyFactory:error:;
+ (void)setInTransactionProxy:queue:;
+ (void)sendChangesRequest:usingProxyFactory:reply:;
@end
