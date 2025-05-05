@interface CPLPullSessionUpdate : CPLChangeSessionUpdate
@property (nonatomic) CPLChangeBatch clientBatch;
@property (nonatomic) CPLChangeBatch cloudBatch;
- (id)statusDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)applyToStore:error:;
- (id)storageForStatusInStore:;
- (void).cxx_destruct;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:;
- (BOOL)discardFromStore:error:;
- (id)initWithStore:expandedClientBatch:expandedCloudBatch:;
- (id)clientBatch;
- (id)cloudBatch;
+ (BOOL)supportsSecureCoding;
@end
