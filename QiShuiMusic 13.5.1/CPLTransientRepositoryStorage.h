@interface CPLTransientRepositoryStorage : CPLChangeStorage
@property (nonatomic) CPLEngineTransientRepository transientRepository;
- (id)changeWithScopedIdentifier:;
- (void).cxx_destruct;
- (id)changesWithRelatedScopedIdentifier:class:;
- (id)storageDescription;
- (id)transientRepository;
- (id)initWithTransientRepository:;
@end
