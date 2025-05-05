@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload
- (id)insertAlbumFromDataInManagedObjectContext:;
- (void)migrateMergedPayloadWithUpdatePayloads:;
- (void)_fixHasLocationSmartAlbum;
+ (unsigned int)payloadVersion;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:additionalEntityName:;
@end
