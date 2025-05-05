@interface PHAssetLocationDataProperties : PHAssetPropertySet
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
- (id)initWithFetchDictionary:asset:prefetched:;
- (id)coordinate;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@end
