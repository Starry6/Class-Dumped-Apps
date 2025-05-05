@interface CPLEngineRemappedRecords : CPLEngineStorage
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)writeTransactionDidSucceed;
- (id)scopedIdentifiersRemappedToScopedIdentifier:;
- (id)realScopedIdentifierForRemappedScopedIdentifier:;
- (id)_fixupRemappedRecordsAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:fallback:;
- (BOOL)isRecordWithScopedIdentifierRemapped:;
- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:maxCount:deletedCount:error:;
- (BOOL)addRemappedRecordWithScopedIdentifier:realScopedIdentifier:error:;
- (void).cxx_destruct;
- (void)writeTransactionDidFail;
- (BOOL)removeRemappedRecordWithScopedIdentifier:error:;
@end
