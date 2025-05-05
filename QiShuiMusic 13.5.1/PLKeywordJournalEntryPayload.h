@interface PLKeywordJournalEntryPayload : PLJournalEntryPayload
@property (nonatomic) NSString title;
- (id)title;
- (id)insertKeywordFromDataInManagedObjectContext:;
+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
@end
