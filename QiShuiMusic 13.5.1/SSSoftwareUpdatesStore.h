@interface SSSoftwareUpdatesStore : NSObject
- (id)init;
- (void)dealloc;
- (void)reloadFromServerWithCompletionBlock:;
- (void).cxx_destruct;
- (void)getUpdatesWithCompletionBlock:;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)showApplicationBadgeForPendingUpdates;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:;
- (void)removeUpdateBulletins;
@end
