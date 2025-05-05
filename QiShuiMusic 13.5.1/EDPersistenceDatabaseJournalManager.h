@interface EDPersistenceDatabaseJournalManager : NSObject
@property (nonatomic) NSString journalDirectoryPath;
@property (nonatomic) NSObject<OS_dispatch_queue> checkExistingQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> deleteQueue;
@property (nonatomic) EDPersistenceDatabaseJournal oldestJournal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)waitForDeletes;
- (id)journalDirectoryPath;
- (id)initWithBasePath:;
- (id)oldestJournal;
- (id)deleteQueue;
- (id)checkExistingQueue;
- (void).cxx_destruct;
- (void)_journalNoLongerReferenced:;
- (id)_getJournalWithBlock:;
- (id)currentJournalCreateIfNeeded:;
- (void)mergedJournal:;
- (void)_deleteJournalNumber:;
+ (id)log;
@end
