@interface WBTabCyclerCommandHandler : NSObject
@property (nonatomic) WBTabGroupManager tabGroupManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deviceIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (id)tabGroupManager;
- (void)fetchTopLevelBookmarkList:;
- (void)clearBookmarksWithOptions:completionHandler:;
- (void)createBookmarkWithTitle:url:inListWithIdentifier:atIndex:reply:;
- (void)createBookmarkListWithTitle:inListWithIdentifier:atIndex:reply:;
- (void)deleteBookmarkWithIdentifier:reply:;
- (void)moveBookmarkWithIdentifier:intoListWithIdentifier:atIndex:reply:;
- (void)setTitle:forBookmarkWithIdentifier:reply:;
- (void)setURL:forBookmarkWithIdentifier:reply:;
- (void)syncBookmarksWithCompletionHandler:;
- (id)initWithTabGroupManager:;
- (void)_startMonitoringSyncStatusWithCompletionHandler:;
- (void)_clearLocalTabGroupsWithCompletionHandler:;
- (void)_clearLocalTabGroupsWithCompletionHandler:retryCooldown:;
- (void)_clearRemoteTabGroupsWithCompletionHandler:;
- (void)_deleteTabGroup:reply:;
- (void)_deleteTab:reply:;
- (void)_setTitle:forTabGroupWithUUID:reply:;
- (void)_setTitle:forTabWithUUID:reply:;
- (void)_triggerTabGroupSync;
- (void)_startMonitoringTabGroupUpdateExpectingMigration:completionHandler:;
- (id)_tabGroupBeforeIndex:;
- (id)_tabBeforeIndex:inGroup:;
- (id)_mutableTabBeforeIndex:inGroup:;
- (id)_tabGroupWithIdentifier:;
- (id)_tabWithIdentifier:;
- (id)_cyclerRepresentationOfTabGroup:;
- (id)_cyclerRepresentationOfTab:;
@end
