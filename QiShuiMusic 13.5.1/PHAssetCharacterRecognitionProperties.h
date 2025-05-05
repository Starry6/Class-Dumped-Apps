@interface PHAssetCharacterRecognitionProperties : PHAssetPropertySet
@property (nonatomic) NSData data;
@property (nonatomic) NSData characterRecognitionData;
@property (nonatomic) NSData machineReadableCodeData;
@property (nonatomic) q algorithmVersion;
@property (nonatomic) NSDate adjustmentVersion;
- (id)initWithFetchDictionary:asset:prefetched:;
- (id)adjustmentVersion;
- (id)data;
- (id)characterRecognitionData;
- (void).cxx_destruct;
- (id)machineReadableCodeData;
- (long long)algorithmVersion;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@end
