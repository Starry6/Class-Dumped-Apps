@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload
- (void)updateAlbum:includePendingChanges:;
+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:additionalEntityName:;
@end
