@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet
@property (nonatomic) BOOL reverseLocationDataIsValid;
@property (nonatomic) NSData reverseLocationData;
@property (nonatomic) BOOL shiftedLocationIsValid;
@property (nonatomic) NSString addressString;
@property (nonatomic) Q variationSuggestionStates;
- (id)initWithFetchDictionary:asset:prefetched:;
- (BOOL)shiftedLocationIsValid;
- (id)addressString;
- (id)localizedGeoDescriptionIsHome:;
- (BOOL)reverseLocationDataIsValid;
- (void).cxx_destruct;
- (unsigned long long)variationSuggestionStates;
- (id)_locationInfo;
- (id)reverseLocationData;
- (id)placeNamesForLocalizedDetailedDescriptionIsHome:;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
