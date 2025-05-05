@interface CPLCloudCacheBaseView : CPLRecordStorageView
@property (nonatomic) CPLEngineCloudCache cloudCache;
@property (nonatomic) BOOL useFinal;
- (id)cloudCache;
- (id)recordViewWithScopedIdentifier:;
- (id)recordViewsWithRelatedScopedIdentifier:class:;
- (void).cxx_destruct;
- (id)initWithCloudCache:useFinal:;
- (BOOL)useFinal;
@end
