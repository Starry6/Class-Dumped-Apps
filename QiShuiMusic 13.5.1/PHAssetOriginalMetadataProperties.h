@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet
@property (nonatomic) NSString originalAssetsUUID;
@property (nonatomic) q originalHeight;
@property (nonatomic) q originalWidth;
@property (nonatomic) NSString originalFilename;
@property (nonatomic) s originalExifOrientation;
@property (nonatomic) Q originalFilesize;
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) NSInteger timeZoneOffset;
- (long long)originalWidth;
- (id)initWithFetchDictionary:asset:prefetched:;
- (unsigned long long)originalFilesize;
- (int)timeZoneOffset;
- (short)originalExifOrientation;
- (id)originalFilename;
- (void).cxx_destruct;
- (id)originalAssetsUUID;
- (long long)originalHeight;
- (id)timeZone;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
