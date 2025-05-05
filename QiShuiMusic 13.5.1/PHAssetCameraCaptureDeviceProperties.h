@interface PHAssetCameraCaptureDeviceProperties : PHAssetPropertySet
@property (nonatomic) BOOL isSelfie;
- (id)initWithFetchDictionary:asset:prefetched:;
- (BOOL)isSelfie;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@end
