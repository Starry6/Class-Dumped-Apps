@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet
@property (nonatomic) NSDate addedDate;
- (id)addedDate;
+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (long long)batchSize;
+ (id)propertiesToSortBy;
+ (BOOL)useObjectFetchingContext;
+ (BOOL)useNoIndexSelf;
@end
