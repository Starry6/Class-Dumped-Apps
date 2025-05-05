@interface MCAccountUtilities : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> signInQueue;
- (id)init;
- (id)signInQueue;
- (void).cxx_destruct;
- (void)setSignInQueue:;
- (void)signInAccountsWithTypes:authenticationResult:personaID:baseViewController:completionHandler:;
- (BOOL)_signIniCloudAccountWithAuthenticationResult:personaID:baseViewController:outError:;
- (BOOL)_signIniTunesAccountWithAuthenticationResult:personaID:baseViewController:outError:;
+ (void)checkAccountConsistencyAndReleaseOrphanedAccounts;
+ (id)accountDataclassesForBundleID:;
+ (id)appStoreAccountIdentifierForPersona:;
+ (BOOL)hasManagedAccountOfDataclasses:;
@end
