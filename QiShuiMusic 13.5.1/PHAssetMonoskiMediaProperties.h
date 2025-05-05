@interface PHAssetMonoskiMediaProperties : PHAssetPropertySet
@property (nonatomic) s monoskiMediaType;
- (id)initWithFetchDictionary:asset:prefetched:;
- (short)monoskiMediaType;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@end
