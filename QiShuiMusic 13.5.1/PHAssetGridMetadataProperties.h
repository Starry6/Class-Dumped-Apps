@interface PHAssetGridMetadataProperties : PHAssetPropertySet
@property (nonatomic) NSString title;
@property (nonatomic) NSString originalFilename;
- (id)initWithFetchDictionary:asset:prefetched:;
- (id)title;
- (id)originalFilename;
- (void).cxx_destruct;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
