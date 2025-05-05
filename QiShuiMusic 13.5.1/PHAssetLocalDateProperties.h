@interface PHAssetLocalDateProperties : PHAssetPropertySet
@property (nonatomic) NSNumber inferredTimeZoneOffset;
@property (nonatomic) q creationDateSource;
- (id)initWithFetchDictionary:asset:prefetched:;
- (void).cxx_destruct;
- (long long)creationDateSource;
- (id)inferredTimeZoneOffset;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
