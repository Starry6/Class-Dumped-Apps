@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage
@property (nonatomic) CPLEngineStore store;
- (id)initWithStore:;
- (id)changeWithScopedIdentifier:;
- (void).cxx_destruct;
- (id)changesWithRelatedScopedIdentifier:class:;
- (id)store;
- (id)storageDescription;
@end
