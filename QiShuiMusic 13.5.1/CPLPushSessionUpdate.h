@interface CPLPushSessionUpdate : CPLChangeSessionUpdate
@property (nonatomic) CPLChangeBatch diffBatch;
@property (nonatomic) NSDictionary pushContexts;
@property (nonatomic) NSArray addedRecords;
@property (nonatomic) NSArray updatedRecords;
@property (nonatomic) NSArray deletedRecordScopedIdentifiers;
@property (nonatomic) NSSet unquarantinedRecordScopedIdentifiers;
@property (nonatomic) NSDictionary recordWithStatusChangesToNotify;
- (id)statusDescription;
- (id)deletedRecordScopedIdentifiers;
- (id)addedRecords;
- (id)unquarantinedRecordScopedIdentifiers;
- (id)updatedRecords;
- (id)diffBatch;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)applyToStore:error:;
- (id)storageForStatusInStore:;
- (id)pushContexts;
- (void).cxx_destruct;
- (id)recordWithStatusChangesToNotify;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:;
- (BOOL)discardFromStore:error:;
- (id)initWithPushSessionTracker:error:;
+ (BOOL)supportsSecureCoding;
@end
