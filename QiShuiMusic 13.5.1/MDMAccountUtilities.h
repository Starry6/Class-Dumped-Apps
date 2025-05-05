@interface MDMAccountUtilities : NSObject
+ (id)rmAccountWithIdentifier:fromStore:error:;
+ (void)stashMAIDShortLivedTokenWithAccount:authenticationResults:;
+ (void)removeMAIDShortLivedTokenWithAccount:;
+ (id)authenticatorForRMAccountID:;
+ (id)bearerTokenForRMAccountID:error:;
+ (id)maidPropertiesForRMAccountID:;
+ (id)_shortLivedTokenFromRMAccount:inStore:;
+ (id)_longLivedTokenFromRMAccount:inStore:;
+ (BOOL)updateOrganizationName:rmAccountIdentifier:personaID:error:;
+ (id)_createMissingRMAccountError;
+ (id)_createMissingBearerTokenError;
@end
