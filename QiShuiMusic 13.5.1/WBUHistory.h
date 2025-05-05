@interface WBUHistory : WBSHistory
@property (nonatomic) BOOL shouldScheduleMaintenance;
- (id)init;
- (void)_addVisitedLinksForItemsIfNeeded:;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:;
- (Class)_historyItemClass;
- (void)_removeAllVisitedLinks;
- (void)setShouldScheduleMaintenance:;
- (BOOL)historyStoreShouldScheduleMaintenance:;
- (void)historyStoreDidFailDatabaseIntegrityCheck:;
- (id)_createHistoryStore;
- (BOOL)shouldScheduleMaintenance;
@end
