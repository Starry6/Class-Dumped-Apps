@interface NSPersistentCloudKitContainer : NSPersistentContainer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)initializeCloudKitSchemaWithOptions:error:;
- (void)dealloc;
- (void)eventUpdated:;
- (id)initWithName:managedObjectModel:;
- (void)shareManagedObjects:toShare:completion:;
- (BOOL)canUpdateRecordForManagedObjectWithID:;
- (void)persistUpdatedShare:inPersistentStore:completion:;
- (BOOL)canDeleteRecordForManagedObjectWithID:;
- (id)recordsForManagedObjectIDs:;
- (void)acceptShareInvitationsFromMetadata:intoPersistentStore:completion:;
- (BOOL)canModifyManagedObjectsInStore:;
- (void)_loadStoreDescriptions:withCompletionHandler:;
- (id)fetchSharesMatchingObjectIDs:error:;
- (void)purgeObjectsAndRecordsInZoneWithID:inPersistentStore:completion:;
- (id)recordIDForManagedObjectID:;
- (void)acceptShareInvitationsFromURLs:intoPersistentStore:completion:;
- (void)fetchParticipantsMatchingLookupInfos:intoPersistentStore:completion:;
- (id)recordIDsForManagedObjectIDs:;
- (BOOL)assignManagedObjects:toCloudKitRecordZone:inPersistentStore:error:;
- (void)setPersistentStoreDescriptions:;
- (id)recordForManagedObjectID:;
- (id)fetchSharesInPersistentStore:error:;
+ (id)discoverDefaultContainerIdentifier;
@end
