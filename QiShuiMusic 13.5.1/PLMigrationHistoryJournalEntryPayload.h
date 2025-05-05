@interface PLMigrationHistoryJournalEntryPayload : PLJournalEntryPayload
- (BOOL)updatePayloadAttributes:andNilAttributes:withManagedObject:forPayloadProperty:;
- (void)appendAttributeKey:value:toDescriptionBuilder:;
- (id)payloadValueFromAttributes:forPayloadProperty:;
- (BOOL)comparePayloadValue:toObjectDictionaryValue:forPayloadProperty:;
- (void)applyPayloadProperty:toManagedObject:key:payloadAttributesToUpdate:;
- (id)insertMigrationHistoryFromDataInManagedObjectContext:;
+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
@end
