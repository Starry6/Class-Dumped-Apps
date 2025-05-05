@interface DMCAccountUtilities : NSObject
@property (nonatomic) DMCHangDetectionQueue signInQueue;
- (id)signInQueue;
- (void).cxx_destruct;
- (void)setSignInQueue:;
- (BOOL)_signIniCloudAccountWithAuthenticationResult:personaID:baseViewController:outError:;
- (void)signInAccountsWithTypes:authenticationResult:personaID:canMakeAccountActive:baseViewController:completionHandler:;
- (BOOL)_signIniTunesAccountWithAuthenticationResult:personaID:canMakeAccountActive:baseViewController:outError:;
- (void)signOutAllPrimaryAccounts;
+ (id)managedAppleIDNameWithPersonaID:;
+ (id)accountIdentifierForAppleAccountWithPersonaID:;
+ (id)appStoreAccountIdentifierForPersona:;
+ (id)_appleAccountWithPersonaID:;
@end
