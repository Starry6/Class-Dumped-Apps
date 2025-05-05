@interface CPLPushRepositoryStorage : CPLChangeStorage
@property (nonatomic) CPLEnginePushRepository pushRepository;
- (id)pushRepository;
- (id)changeWithScopedIdentifier:;
- (id)scopedIdentifierAddingScopeIndexForScopedIdentifier:;
- (BOOL)getRelatedScopedIdentifier:forRecordWithScopedIdentifier:;
- (BOOL)hasChangesWithRelatedScopedIdentifier:class:;
- (void).cxx_destruct;
- (id)changesWithRelatedScopedIdentifier:class:;
- (id)storageDescription;
- (id)initWithPushRepository:;
@end
