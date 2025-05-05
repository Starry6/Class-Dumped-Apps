@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet
@property (nonatomic) q destinationAssetCopyState;
- (id)initWithFetchDictionary:asset:prefetched:;
- (long long)destinationAssetCopyState;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
