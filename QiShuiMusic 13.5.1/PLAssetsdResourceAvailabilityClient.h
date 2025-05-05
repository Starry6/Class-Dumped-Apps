@interface PLAssetsdResourceAvailabilityClient : PLAssetsdBaseClient
- (id)sendMakeResourceAvailableRequest:reply:;
- (void)sendMakeResourceUnavailableRequest:;
- (id)sendResourceRepairRequest:errorCodes:reply:;
- (id)sendResourceRepairRequestForAsset:errorCodes:reply:;
- (id)sendVideoRequest:reply:;
- (void)setSharedMemoryForCacheMetricsCollector:;
@end
