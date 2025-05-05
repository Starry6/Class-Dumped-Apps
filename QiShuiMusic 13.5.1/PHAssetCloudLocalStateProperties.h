@interface PHAssetCloudLocalStateProperties : PHAssetPropertySet
@property (nonatomic) NSManagedObjectID cloudMasterObjectID;
@property (nonatomic) S assetCloudLocalState;
- (id)initWithFetchDictionary:asset:prefetched:;
- (void).cxx_destruct;
- (id)cloudMasterObjectID;
- (unsigned short)assetCloudLocalState;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (id)additionalPropertiesToFetchOnPrimaryObject;
+ (BOOL)inverseIsToMany;
+ (unsigned short)_assetCloudLocalStateFromAssetLocalState:masterLocalState:;
@end
