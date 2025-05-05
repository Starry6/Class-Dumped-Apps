@interface CPLEngineIDMapping : CPLEngineStorage
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:;
- (id)localScopedIdentifierForCloudScopedIdentifier:isFinal:;
- (BOOL)hasPendingIdentifiers;
- (id)setupCloudScopedIdentifier:forLocalScopedIdentifier:isFinal:direction:error:;
- (BOOL)setFinalCloudScopedIdentifier:forPendingCloudScopedIdentifier:error:;
- (BOOL)addCloudScopedIdentifier:forLocalScopedIdentifier:isFinal:direction:error:;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:isFinal:;
- (BOOL)markAllPendingIdentifiersForScopeWithIdentifier:asFinalWithError:;
- (BOOL)addDeleteEventForRecordWithLocalScopedIdentifier:direction:error:;
- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:maxCount:deletedCount:error:;
- (BOOL)resetAllFinalCloudIdentifiersForScopeWithIdentifier:error:;
- (BOOL)addAddEventForRecordWithLocalScopedIdentifier:direction:error:;
- (BOOL)removeMappingForCloudScopedIdentifier:error:;
@end
