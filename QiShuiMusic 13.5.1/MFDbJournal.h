@interface MFDbJournal : NSObject
- (void)dealloc;
- (id)initWithMailbox:;
- (void).cxx_destruct;
- (int)_processJournalFile:connection:;
- (long long)mergeUsingConnection:;
- (BOOL)_markMailboxForReconciliation:connection:;
+ (id)_journalForMailbox:;
+ (id)legacyJournal;
+ (long long)mergeAllJournalsUsingConnection:;
@end
