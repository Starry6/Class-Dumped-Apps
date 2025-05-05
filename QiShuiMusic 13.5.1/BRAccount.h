@interface BRAccount : NSObject
@property (nonatomic) NSData perAppAccountIdentifier;
- (id)init;
- (id)perAppAccountIdentifier;
- (id)containerWithPendingChanges;
- (BOOL)hasOptimizeStorageWithError:;
- (void)evictOldDocumentsWithHandler:;
- (void)setPerAppAccountIdentifier:;
- (void).cxx_destruct;
- (id)initWithAccountID:;
- (BOOL)getEvictableSpace:error:;
- (BOOL)setOptimizeStorageEnabled:error:;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:error:;
+ (BOOL)refreshCurrentLoggedInAccountWithError:;
+ (id)currentLoggedInAccountWithError:;
+ (id)currentCachedLoggedInAccountWithError:;
+ (void)startAccountTokenChangeObserverIfNeeded;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:error:;
+ (BOOL)refreshCurrentLoggedInAccount;
@end
