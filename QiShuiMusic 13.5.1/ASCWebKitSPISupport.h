@interface ASCWebKitSPISupport : NSObject
+ (BOOL)shouldUseAlternateCredentialStore;
+ (BOOL)arePasskeysDisallowedForRelyingParty:;
+ (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:;
+ (void)getArePasskeysDisallowedForRelyingParty:withCompletionHandler:;
+ (void)setShouldUseAlternateCredentialStore:;
+ (void)resetCredentialStore;
@end
