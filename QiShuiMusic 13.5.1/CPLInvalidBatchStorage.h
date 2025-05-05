@interface CPLInvalidBatchStorage : CPLEngineTransientRepositoryBatchStorage
- (BOOL)hasChangesInScopeWithIdentifier:;
- (id)initWithTransientRepository:scope:;
@end
