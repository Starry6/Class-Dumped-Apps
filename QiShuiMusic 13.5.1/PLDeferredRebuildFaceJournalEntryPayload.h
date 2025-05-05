@interface PLDeferredRebuildFaceJournalEntryPayload : PLJournalEntryPayload
- (id)insertDeferredRebuildFaceFromDataInManagedObjectContext:;
+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:additionalEntityName:;
@end
