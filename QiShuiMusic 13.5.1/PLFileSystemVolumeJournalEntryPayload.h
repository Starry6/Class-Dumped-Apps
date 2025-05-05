@interface PLFileSystemVolumeJournalEntryPayload : PLJournalEntryPayload
- (id)insertFileSystemVolumeFromDataInManagedObjectContext:;
+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
@end
