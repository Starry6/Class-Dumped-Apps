@interface PHRecentContentSyndicationCollectionsResult : PHFetchResult
@property (nonatomic) NSArray objects;
@property (nonatomic) NSString identifier;
- (id)photoLibrary;
- (id)containerIdentifier;
- (id)fetchedObjects;
- (id)identifier;
- (unsigned long long)hash;
- (id)objectIDAtIndex:;
- (unsigned long long)possibleChangesForChange:;
- (id)objects;
- (void).cxx_destruct;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)description;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:withChange:usingManagedObjectContext:;
- (long long)collectionFetchType;
- (id)fetchSortDescriptors;
- (id)fetchRequest;
- (BOOL)isEqual:;
- (id)copyWithOptions:;
- (void)prefetchObjectsAtIndexes:;
- (BOOL)_hasReachedGroupCapacity;
- (id)_transientCollectionForIdentifier:;
- (id)_transientCollectionForAssetOID:;
- (id)initWithObjects:photoLibrary:fetchOptions:maxNumberOfStacks:maxNumberOfAssetsPerStack:fetchType:fetchPropertySets:identifier:registerIfNeeded:;
- (id)additionalChangedIdentifiersFromPreviousIdentifiers:currentIdentifiers:inFetchResultBeforeChanges:;
+ (id)pointerComparableIdentifiersFromIdentifiers:;
@end
