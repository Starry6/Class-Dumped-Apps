@interface CPLClientCacheBaseView : CPLRecordStorageView
@property (nonatomic) CPLEngineStore store;
@property (nonatomic) CPLEngineCloudCache cloudCache;
@property (nonatomic) <CPLEngineIDMapping> idMapping;
- (id)idMapping;
- (id)initWithStore:;
- (id)cloudCache;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:;
- (id)recordViewWithScopedIdentifier:;
- (BOOL)hasRecordWithScopedIdentifier:;
- (id)recordViewsWithRelatedScopedIdentifier:class:;
- (void).cxx_destruct;
- (id)description;
- (id)store;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:class:;
+ (id)clientCacheBaseViewIDMappingForStore:;
@end
