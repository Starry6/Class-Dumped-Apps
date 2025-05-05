@interface WBSRecentlyBreachedPasswordProvider : NSObject
@property (nonatomic) NSArray recentlyBreachedSavedAccountsIfAvailable;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:;
- (void)clearRecentlyBreachedSavedAccounts;
- (id)recentlyBreachedSavedAccountsIfAvailable;
- (void)_getRecentlyBreachedSavedAccountsWithCompletionHandler:;
+ (id)sharedProvider;
@end
