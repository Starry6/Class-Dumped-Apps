@interface PLLimitedLibraryFetchFilter : PLManagedObject
@property (nonatomic) NSString applicationIdentifier;
@property (nonatomic) NSString designatedRequirement;
@property (nonatomic) NSData fetchFilterData;
- (void)removeAllAssets;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)addAssetsWithUUIDs:;
- (BOOL)containsAssetWithUUID:;
- (id)assetUUIDStrings;
- (id)predicateForEntityName:;
- (void)_loadAssetUUIDs;
+ (id)entityName;
+ (id)_decodeFetchFilterData:withUUIDHandler:resultHandler:;
+ (id)fetchLimitedLibraryFetchFilterWithApplicationIdentifier:inManagedObjectContext:;
+ (id)fetchOrCreateLimitedLibraryFetchFilterWithApplicationIdentifier:auditToken:inManagedObjectContext:;
+ (id)entityNameToPredicateMapWithApplicationIdentifier:;
+ (id)insertIntoManagedObjectContext:forApplicationIdentifier:;
+ (id)fetchFilterIdentifierForApplicationIdentifier:;
+ (id)entityNameToPredicateMapFromFetchFilterData:withApplicationIdentifier:;
+ (void)deleteLimitedLibraryFetchFilterWithApplicationIdentifier:inManagedObjectContext:;
+ (id)_assetUUIDStringsFromFetchFilterData:;
+ (void)deleteAllLimitedLibraryFetchFiltersInManagedObjectContext:;
+ (id)debugDescriptionOfCurrentLimitedLibraryFetchFiltersInManagedObjectContext:;
+ (id)_fetchFiltersMatchingPredicate:sortDescriptors:limit:inManagedObjectContext:;
+ (id)disallowedAlbumKinds;
@end
