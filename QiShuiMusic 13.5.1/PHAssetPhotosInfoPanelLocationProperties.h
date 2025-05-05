@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet
@property (nonatomic) NSData placeAnnotationData;
- (id)initWithFetchDictionary:asset:prefetched:;
- (void).cxx_destruct;
- (id)placeAnnotationData;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@end
