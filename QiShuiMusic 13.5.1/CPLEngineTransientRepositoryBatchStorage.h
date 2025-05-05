@interface CPLEngineTransientRepositoryBatchStorage : NSObject
@property (nonatomic) CPLEngineTransientRepository transientRepository;
@property (nonatomic) CPLEngineScope scope;
@property (nonatomic) CPLRecordTargetMapping targetMapping;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)allChangesWithClass:secondaryScopedIdentifier:;
- (id)allNonDeletedChangesWithClass:scopeIdentifier:;
- (id)scope;
- (id)allChangesWithScopeIdentifier:;
- (id)allChangesWithClass:scopeIdentifier:changeType:;
- (id)changeWithScopedIdentifier:;
- (void)cleanupAfterExtractingBatch;
- (void)beginExtractingBatch;
- (id)allChangesWithClass:relatedScopedIdentifier:;
- (BOOL)removeChange:error:;
- (void).cxx_destruct;
- (id)allChangesWithClass:scopeIdentifier:trashed:;
- (BOOL)hasChangesInScopeWithIdentifier:;
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:;
- (id)initWithTransientRepository:scope:;
- (id)transientRepository;
- (id)targetMapping;
@end
