@interface PHAssetVisualSearchProperties : PHAssetPropertySet
@property (nonatomic) NSData visualSearchData;
@property (nonatomic) q algorithmVersion;
@property (nonatomic) NSDate adjustmentVersion;
- (id)initWithFetchDictionary:asset:prefetched:;
- (id)adjustmentVersion;
- (void).cxx_destruct;
- (long long)algorithmVersion;
- (id)visualSearchData;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@end
