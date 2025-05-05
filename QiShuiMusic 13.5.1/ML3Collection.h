@interface ML3Collection : ML3Entity
- (id)initWithDictionary:inLibrary:cachedNameOrders:usingConnection:;
- (void)updateTrackValues:;
- (void)updateRepresentativeCollectionValues:existingRepresentativePersistentID:forUpdateTrackValues:;
- (void)updateCloudStatus;
+ (id)propertyForMPMediaEntityProperty:;
+ (id)trackForeignPersistentID;
+ (id)foreignPropertyForProperty:entityClass:;
+ (BOOL)libraryContentsChangeForProperty:;
+ (BOOL)deleteFromLibrary:deletionType:persistentIDs:count:usingConnection:;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)artworkCacheIDProperty;
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:persistentIDs:usingConnection:;
+ (BOOL)canonicalizeCollectionRepresentativeItemsInLibrary:usingConnection:;
+ (BOOL)removeOrphanedCollectionsInLibrary:usingConnection:;
+ (id)collectionEntityClasses;
+ (BOOL)_updateRepresentativeItemsForPersistentIDs:usingConnection:;
@end
