@interface CPLEnginePendingRecordChecks : CPLEngineStorage
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasRecordsToCheckWithScopeIdentifier:;
- (BOOL)enqueueCloudScopedIdentifiersToCheck:error:;
- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:maxCount:deletedCount:error:;
- (BOOL)dequeueCloudScopedIdentifiersToCheck:error:;
- (id)nextBatchOfRecordsToCheckWithScopeIdentifier:;
@end
