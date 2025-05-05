@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload
@property (nonatomic) BOOL isRootFolder;
@property (nonatomic) BOOL isProjectAlbumRootFolder;
@property (nonatomic) NSOrderedSet childCollectionUUIDs;
- (BOOL)isRootFolder;
- (BOOL)updatePayloadAttributes:andNilAttributes:withManagedObject:forPayloadProperty:;
- (void)appendAttributeKey:value:toDescriptionBuilder:;
- (id)payloadValueFromAttributes:forPayloadProperty:;
- (void)updateAlbum:includePendingChanges:;
- (BOOL)comparePayloadValue:toObjectDictionaryValue:forPayloadProperty:;
- (id)insertAlbumFromDataInManagedObjectContext:;
- (BOOL)isProjectAlbumRootFolder;
- (id)childCollectionUUIDs;
+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:additionalEntityName:;
+ (void)updateChildrenOrderingInFolder:usingChildCollectionUUIDs:includePendingChanges:;
@end
