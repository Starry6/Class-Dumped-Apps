@interface PLAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload
@property (nonatomic) NSOrderedSet assetUUIDs;
- (id)assetUUIDs;
- (BOOL)updatePayloadAttributes:andNilAttributes:withManagedObject:forPayloadProperty:;
- (void)appendAttributeKey:value:toDescriptionBuilder:;
- (id)payloadValueFromAttributes:forPayloadProperty:;
- (void)updateAlbum:includePendingChanges:;
- (BOOL)comparePayloadValue:toObjectDictionaryValue:forPayloadProperty:;
- (id)insertAlbumFromDataInManagedObjectContext:;
+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:additionalEntityName:;
@end
