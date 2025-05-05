@interface PLAlbumListJournalEntryPayload : PLJournalEntryPayload
@property (nonatomic) NSOrderedSet albumUUIDs;
@property (nonatomic) s albumListType;
- (short)albumListType;
- (BOOL)updatePayloadAttributes:andNilAttributes:withManagedObject:forPayloadProperty:;
- (void)appendAttributeKey:value:toDescriptionBuilder:;
- (id)payloadValueFromAttributes:forPayloadProperty:;
- (BOOL)comparePayloadValue:toObjectDictionaryValue:forPayloadProperty:;
- (id)albumUUIDs;
- (id)insertAlbumListFromDataInManagedObjectContext:;
- (void)updateAlbumList:;
+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:additionalEntityName:;
@end
