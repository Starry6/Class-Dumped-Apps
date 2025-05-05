@interface CPLRecordStorageView : NSObject
- (id)resourceOfType:forRecordWithScopedIdentifier:recordClass:error:;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:;
- (id)recordViewWithScopedIdentifier:;
- (BOOL)hasRecordWithScopedIdentifier:;
- (id)recordViewsWithRelatedScopedIdentifier:class:;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:class:;
- (id)compactedBatchFromExpandedBatch:;
- (id)localChangeBatchFromCloudBatch:usingMapping:withError:;
- (id)resourceOfType:forRecordWithScopedIdentifier:record:error:;
@end
