@interface PLJournalManagerCore : NSObject
- (id)init;
- (id)initWithBaseURL:;
- (void).cxx_destruct;
- (BOOL)saveHistoryToken:error:;
- (void)removeHistoryToken;
+ (id)payloadClasses;
+ (void)validatePayloadClassesForManagedObjectModel:;
+ (id)_nextValidPayloadWithObjectEnumerator:changedKeys:;
+ (BOOL)createSnapshotWithJournal:usingManagedObjectContext:error:;
+ (BOOL)appendSnapshotWithJournal:usingManagedObjectContext:changedKeys:error:;
+ (id)_objectEnumeratorForJournal:usingManagedObjectContext:error:;
@end
