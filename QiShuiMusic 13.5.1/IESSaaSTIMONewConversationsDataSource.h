@interface IESSaaSTIMONewConversationsDataSource : IESSaaSTIMOConversationsDataSource
@property (nonatomic) NSObject<OS_dispatch_queue> sortOrderQueue;
@property (nonatomic) q lastSortOrder;
@property (nonatomic) BOOL hasBeganUpdateSortOrder;
@property (nonatomic) <IESSaaSTIMKVStorageProtocol> kvStorage;
- (void)removeDBUnreadsAllConversations;
- (void)asyncHandleAllDBConversationsWithFirstLoadCount:;
- (void)caculateAllSortsOfUnreadCountWithConversations:;
- (id)filterAndHandleEmptyConversations:;
- (BOOL)hasBeganUpdateSortOrder;
- (id)initWithFilter:includeEmpty:limit:inbox:delegate:boxType:;
- (id)kvStorage;
- (long long)lastSortOrder;
- (id)loadFirstPageConversation;
- (void)loadRemainingSessions;
- (void)loadSessions;
- (BOOL)needUpdateSortOrder;
- (void)notifyDelegateUpdateConversations:monitorArray:;
- (void)p_loadSessions;
- (void)p_loadSessionsOptimize;
- (void)setHasBeganUpdateSortOrder:;
- (void)setKvStorage:;
- (void)setLastSortOrder:;
- (void)setSortOrderQueue:;
- (id)sortOrderQueue;
- (id)sortedConversations:;
- (void)updateSortOrderToDBWithConversations:;
- (void).cxx_destruct;
@end
