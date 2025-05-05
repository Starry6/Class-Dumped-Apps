@interface MFAccountStore : NSObject
@property (nonatomic) ACAccountStore persistentStore;
- (id)init;
- (void)dealloc;
- (id)persistentStore;
- (void).cxx_destruct;
- (void)_accountsStoreChanged:;
- (void)setPersistentStore:;
- (id)newPersistentAccountWithAccountTypeIdentifier:;
- (id)supportedDataclassesWithAccountTypeIdentifier:;
- (id)accountsWithTypeIdentifiers:error:;
- (id)existingAccountWithPersistentAccount:;
- (id)_accountWithPersistentAccount:useExisting:;
- (void)savePersistentAccountWithAccount:;
- (void)removePersistentAccountWithAccount:;
+ (id)sharedAccountStore;
+ (id)_accountWithAccountClass:persistentAccount:useExisting:;
+ (BOOL)_shouldUpdateAccountsInPlace;
@end
