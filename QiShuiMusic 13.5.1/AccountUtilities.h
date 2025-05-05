@interface AccountUtilities : NSObject
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) NSObject<OS_dispatch_group> backgroundDispatchGroup;
@property (nonatomic) NSLock updateAccountInfosLock;
- (void)setAccountStore:;
- (id)backgroundDispatchGroup;
- (id)init;
- (id)accountStore;
- (void)dealloc;
- (void)updateAccountInfos;
- (id)defaultStoreSyncIdWithDesiredSyncId:;
- (void)setBackgroundDispatchGroup:;
- (void)startKeepingAccountInfosUpToDate;
- (void)setUpdateAccountInfosLock:;
- (id)localAccountDisplayName;
- (id)accountIDsEnabledForNotes;
- (id)accountsEnabledForNotes;
- (id)freshContext;
- (void).cxx_destruct;
- (id)updateAccountInfosLock;
- (void)_accountStoreDidChange:;
- (BOOL)localNotesExist;
+ (id)sharedAccountUtilities;
@end
