@interface PFCloudKitStoreComparisonCache : NSObject
@property (nonatomic) NSPersistentStore store;
@property (nonatomic) NSPersistentStore otherStore;
@property (nonatomic) NSManagedObjectContext storeMoc;
@property (nonatomic) NSManagedObjectContext otherStoreMoc;
@property (nonatomic) BOOL checkCloudKitMetadata;
- (void)dealloc;
- (id)store;
- (id)initWithStore:otherStore:;
- (BOOL)populate:;
- (id)mirroredRelationshipForObject:relatedToObject:byRelationship:;
- (id)mtmKeysForStore:;
- (id)recordIDsRelatedToRecordID:byRelationshipNamed:inStore:;
- (id)metadataForObjectWithID:;
- (id)recordIdsForStore:;
- (id)objectIDForRecordID:inStore:;
- (id)recordIDForObjectID:;
- (id)identityRecordNameForStoreWithIdentifier:;
- (long long)databaseScopeForStoreWithIdentifier:;
- (id)sharedZoneIDsForStore:;
- (id)mtmKeysForRecordZone:inStore:;
- (id)objectIDForIdentifier:inStore:;
- (id)identifiersForStore:;
- (id)deriveIdentifierForNonCloudObjectID:;
- (void)_setCheckCloudKitMetadata:;
- (id)otherStore;
- (id)storeMoc;
- (id)otherStoreMoc;
- (BOOL)checkCloudKitMetadata;
@end
