@interface PLImportSessionJournalEntryPayload : PLGenericAlbumJournalEntryPayload
@property (nonatomic) NSSet assetUUIDs;
- (id)assetUUIDs;
- (BOOL)updatePayloadAttributes:andNilAttributes:withManagedObject:forPayloadProperty:;
- (void)appendAttributeKey:value:toDescriptionBuilder:;
- (id)payloadValueFromAttributes:forPayloadProperty:;
- (void)updateAlbum:includePendingChanges:;
- (BOOL)comparePayloadValue:toObjectDictionaryValue:forPayloadProperty:;
- (id)insertAlbumFromDataInManagedObjectContext:;
+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
@end
