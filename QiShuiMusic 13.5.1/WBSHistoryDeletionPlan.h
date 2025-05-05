@interface WBSHistoryDeletionPlan : NSObject
@property (nonatomic) NSSet triggeringItems;
@property (nonatomic) NSSet triggeringVisits;
@property (nonatomic) NSSet discoveredItemsToDelete;
@property (nonatomic) NSSet discoveredVisitsToDelete;
@property (nonatomic) NSSet allItemsToDelete;
@property (nonatomic) NSSet allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
@property (nonatomic) NSMapTable allVisitsToDeleteByItemExcludingItemsBeingDeleted;
@property (nonatomic) NSMapTable updatedLastVisitsByItem;
@property (nonatomic) BOOL wasPrepared;
- (void).cxx_destruct;
- (id)initWithSQLiteStore:triggeringItems:excludingItems:visits:reason:;
- (id)initWithSQLiteStore:triggeringVisits:excludingItems:visits:;
- (id)initWithSQLiteStore:discoveredItemsToDelete:;
- (id)initWithSQLiteStore:triggeringVisits:updatedLastVisitsByItem:;
- (id)allItemsToDelete;
- (id)allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
- (id)allVisitsToDeleteByItemExcludingItemsBeingDeleted;
- (void)_prepareWithTriggeringItems:triggeringVisits:;
- (id)_extraVisitsToDeleteWhenDeletingItems:visits:;
- (id)_extraVisitsToDeleteWhenDeletingItems:visits:relatedVisitKey:relatedVisitsQueryFactory:;
- (id)triggeringItems;
- (id)triggeringVisits;
- (id)discoveredItemsToDelete;
- (id)discoveredVisitsToDelete;
- (id)updatedLastVisitsByItem;
- (BOOL)wasPrepared;
@end
