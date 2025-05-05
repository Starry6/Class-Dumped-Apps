@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet
@property (nonatomic) NSDate creationDate;
- (id)creationDate;
+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (long long)batchSize;
+ (id)propertiesToSortBy;
+ (BOOL)useObjectFetchingContext;
+ (BOOL)useNoIndexSelf;
@end
