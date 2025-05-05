@interface MPStoreItemMetadataRequestController : NSObject
@property (nonatomic) q cacheSize;
- (void)setCacheSize:;
- (long long)cacheSize;
- (id)init;
- (void)beginTransaction;
- (void)endTransaction;
- (void)requestStoreItemMetadataForReason:withItemIdentifiers:responseHandler:;
- (id)getStoreItemMetadataForRequest:responseHandler:;
- (void)addStoreItemMetadata:forUserIdentity:;
- (void).cxx_destruct;
- (id)getStoreItemMetadataForRequest:includeBatchResponseError:responseHandler:;
- (void)_removeExpiredItemsPeriodically;
- (void)addStoreItemMetadata:;
+ (unsigned long long)optimalBatchSize;
+ (id)sharedStoreItemMetadataRequestController;
@end
