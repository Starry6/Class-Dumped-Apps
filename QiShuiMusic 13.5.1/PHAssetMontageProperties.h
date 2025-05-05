@interface PHAssetMontageProperties : PHAssetPropertySet
@property (nonatomic) NSString montage;
- (id)initWithFetchDictionary:asset:prefetched:;
- (void).cxx_destruct;
- (id)montage;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
