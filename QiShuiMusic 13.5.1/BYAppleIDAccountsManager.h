@interface BYAppleIDAccountsManager : NSObject
@property (nonatomic) AASetupAssistantService aaService;
- (void)runPostRestoreRenewCredentialsIfNeeded;
- (id)init;
- (void)loginDelegateAccountsWithUsername:password:rawPassword:skipiTunes:onlyAppleIDPlugin:completion:;
- (id)aaService;
- (void)setAAService:;
- (void)preloadDefaultLoginParametersWithBundleIDs:;
- (void)repeatedlyAttemptPostRestoreRenewForAccount:loginContext:numberOfAttemptsAllowed:completion:;
- (void).cxx_destruct;
- (void)enableDataClassesForAccount:completion:;
- (void)attemptPostRestoreRenewForAccount:loginContext:allowFollowUp:completion:;
- (id)initForDelegateBundleIDs:;
- (void)performSilentICDPUpgrade;
- (void)clearStoredLoginContext;
- (id)storedLoginContext;
+ (id)sharedManager;
@end
