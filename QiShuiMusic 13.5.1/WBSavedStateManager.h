@interface WBSavedStateManager : NSObject
@property (nonatomic) <WBTabGroupSyncAgentProxyProtocol> tabGroupSyncAgentProxy;
@property (nonatomic) BOOL isEphemeral;
- (void)saveWindowState:;
- (void)closeWindowState:;
- (void)deleteWindowState:;
- (void)saveBrowserState:completionHandler:;
- (void)userDidAcceptCloudKitShareWithMetadata:;
- (id)init;
- (void)saveBrowserState:;
- (void)deleteTabs:;
- (void)moveTabGroup:afterTabGroup:;
- (void)saveBrowserState:canSafelyTerminateCompletionHandler:;
- (BOOL)isEphemeral;
- (void)deleteWindowStates:;
- (void)insertTabs:inTabGroup:afterTab:;
- (void)insertTabGroup:afterTabGroup:;
- (void).cxx_destruct;
- (void)deleteTabGroup:;
- (void)saveTabGroup:;
- (void)scheduleSyncIfNeeded;
- (id)initWithTabGroupSyncAgentProxy:;
- (BOOL)_isDatabaseEnabled;
- (void)saveTab:;
- (void)updateTabsInTabGroup:;
- (id)tabGroupSyncAgentProxy;
+ (id)ephemeralManager;
@end
