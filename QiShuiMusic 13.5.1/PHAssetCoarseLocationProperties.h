@interface PHAssetCoarseLocationProperties : PHAssetPropertySet
@property (nonatomic) double gpsHorizontalAccuracy;
- (id)initWithFetchDictionary:asset:prefetched:;
- (double)gpsHorizontalAccuracy;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
