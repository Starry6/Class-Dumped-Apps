@interface CKLogicalDeviceScopedStateManager : NSObject
@property (nonatomic) NSMapTable assetsByUUID;
@property (nonatomic) CKLogicalDeviceContext deviceContext;
@property (nonatomic) NSMutableSet completedLongLivedOperationIDs;
@property (nonatomic) NSMutableSet outstandingOperationIDs;
- (id)deviceContext;
- (void)resetThrottles;
- (void)setDeviceContext:;
- (void)readBytesOfInMemoryAssetContentWithUUID:offset:length:reply:;
- (id)trackedAssetForUUID:;
- (void)registerLongLivedOperationWithIDAsCompleted:allowResumingCompletedLongLivedOperations:;
- (void)addThrottle:;
- (void)trackAssets:;
- (id)assetsByUUID;
- (void)setCompletedLongLivedOperationIDs:;
- (void).cxx_destruct;
- (id)completedLongLivedOperationIDs;
- (void)setAssetsByUUID:;
- (id)outstandingOperationIDs;
- (void)openFileWithOpenInfo:reply:;
- (void)registerLongLivedOperationWithIDAsOutstanding:;
- (void)setOutstandingOperationIDs:;
- (id)initWithDeviceContext:;
@end
