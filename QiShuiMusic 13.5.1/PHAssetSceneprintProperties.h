@interface PHAssetSceneprintProperties : PHAssetPropertySet
@property (nonatomic) NSData sceneprint;
@property (nonatomic) NSString duplicateMatchingValue;
@property (nonatomic) NSString duplicateMatchingAlternateValue;
@property (nonatomic) NSData duplicateMatchingData;
@property (nonatomic) NSData duplicateMatchingAlternateData;
- (id)initWithFetchDictionary:asset:prefetched:;
- (void).cxx_destruct;
- (id)duplicateMatchingValue;
- (id)duplicateMatchingAlternateValue;
- (id)sceneprint;
- (id)duplicateMatchingData;
- (id)duplicateMatchingAlternateData;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
