@interface CPLExtractedBatch : NSObject
@property (nonatomic) CPLChangeBatch batch;
@property (nonatomic) Q resourceSize;
@property (nonatomic) BOOL full;
@property (nonatomic) BOOL batchCanLowerQuota;
@property (nonatomic) <NSFastEnumeration> uploadIdentifiers;
@property (nonatomic) NSString clientCacheIdentifier;
- (BOOL)isFull;
- (id)init;
- (id)batch;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)clientCacheIdentifier;
- (unsigned long long)resourceSize;
- (void).cxx_destruct;
- (void)setFull:;
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:;
- (id)uploadIdentifierForChange:;
- (void)addChange:fromStorage:;
- (id)uploadIdentifiers;
- (void)forceScopeIndexOnAllRecordsTo:;
- (void)enumeratePushContextsWithBlock:;
- (BOOL)batchCanLowerQuota;
- (void)setClientCacheIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
