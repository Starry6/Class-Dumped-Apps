@interface CPLChangedRecordStorageView : CPLRecordStorageView
@property (nonatomic) CPLChangeStorage changeStorage;
@property (nonatomic) CPLRecordStorageView baseStorageView;
- (id)resourceOfType:forRecordWithScopedIdentifier:recordClass:error:;
- (id)baseStorageView;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:;
- (id)changeStorage;
- (id)recordViewWithScopedIdentifier:;
- (BOOL)hasRecordWithScopedIdentifier:;
- (id)recordViewsWithRelatedScopedIdentifier:class:;
- (void).cxx_destruct;
- (id)initWithChangeStorage:overStorageView:;
- (id)description;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:class:;
@end
