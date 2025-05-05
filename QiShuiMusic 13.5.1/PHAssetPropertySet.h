@interface PHAssetPropertySet : NSObject
@property (nonatomic) PHAsset asset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithFetchDictionary:asset:prefetched:;
- (id)asset;
- (void).cxx_destruct;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (id)propertiesToPrefetch;
+ (BOOL)inverseIsToMany;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;
@end
