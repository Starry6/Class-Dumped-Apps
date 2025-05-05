@interface PHAssetAdjustmentProperties : PHAssetPropertySet
@property (nonatomic) NSString formatIdentifier;
@property (nonatomic) NSString formatVersion;
@property (nonatomic) Q originalResourceChoice;
- (id)initWithFetchDictionary:asset:prefetched:;
- (id)formatVersion;
- (void).cxx_destruct;
- (unsigned long long)originalResourceChoice;
- (id)formatIdentifier;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
