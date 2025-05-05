@interface PHAssetImportProperties : PHAssetPropertySet
@property (nonatomic) q importedBy;
- (id)initWithFetchDictionary:asset:prefetched:;
- (long long)importedBy;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
