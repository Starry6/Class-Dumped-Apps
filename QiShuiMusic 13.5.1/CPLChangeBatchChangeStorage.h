@interface CPLChangeBatchChangeStorage : CPLChangeStorage
@property (nonatomic) CPLChangeBatch batch;
- (id)batch;
- (id)changeWithScopedIdentifier:;
- (void).cxx_destruct;
- (id)changesWithRelatedScopedIdentifier:class:;
- (id)storageDescription;
- (id)initWithBatch:name:;
@end
