@interface PHAssetDescriptionProperties : PHAssetPropertySet
@property (nonatomic) NSString title;
@property (nonatomic) NSString assetDescription;
@property (nonatomic) NSString accessibilityDescription;
- (id)initWithFetchDictionary:asset:prefetched:;
- (id)accessibilityDescription;
- (id)title;
- (id)assetDescription;
- (void).cxx_destruct;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
