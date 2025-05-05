@interface EDPersistenceDatabaseJournal : NSObject
@property (nonatomic) EDPersistenceDatabaseJournalManager journalManager;
@property (nonatomic) Q referenceCount;
@property (nonatomic) NSString path;
@property (nonatomic) Q number;
- (id)path;
- (unsigned long long)number;
- (id)journalManager;
- (void).cxx_destruct;
- (id)description;
- (void)checkIn;
- (void)checkOut;
- (id)initWithJournalManager:number:;
- (unsigned long long)referenceCount;
@end
