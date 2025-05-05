@interface PHAssetPhotoAnalysisWallpaperProperties : PHAssetPropertySet
@property (nonatomic) NSData wallpaperPropertiesData;
@property (nonatomic) NSDate wallpaperPropertiesTimestamp;
@property (nonatomic) Q wallpaperPropertiesVersion;
- (id)initWithFetchDictionary:asset:prefetched:;
- (void).cxx_destruct;
- (unsigned long long)wallpaperPropertiesVersion;
- (id)wallpaperPropertiesTimestamp;
- (id)wallpaperPropertiesData;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@end
