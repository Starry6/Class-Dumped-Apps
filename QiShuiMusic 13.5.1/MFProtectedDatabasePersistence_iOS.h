@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence
- (BOOL)protectedDataAvailable;
- (void)addAdditionalCriteriaToCleanupActivity:;
- (void)finishJournalReconciliation:;
- (BOOL)supportsJournaling;
+ (id)journalDatabaseName;
+ (id)protectedDatabaseName;
@end
