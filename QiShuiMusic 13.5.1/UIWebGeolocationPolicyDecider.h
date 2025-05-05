@interface UIWebGeolocationPolicyDecider : NSObject
- (void)_load;
- (void)clearCache;
- (id)init;
- (void)_save;
- (void)dealloc;
- (void)clearAllCaches;
- (void)webView:decidePolicyForGeolocationRequestFromOrigin:frame:listener:;
- (id)_siteFileInContainerDirectory:creatingIntermediateDirectoriesIfNecessary:;
- (id)_siteFile;
- (void)clearSafariCache;
- (BOOL)_isAuthorizationDate:inclusivelyBetweenDate:andDate:;
- (void)clearAuthorizationsAddedBetween:and:;
- (long long)_getChallengeCountFromHistoryForToken:requestingURL:;
- (void)_addChallengeCount:forToken:requestingURL:;
- (void)_executeNextChallenge;
- (void)_decidePolicyForGeolocationRequestFromOrigin:requestingURL:view:listener:;
- (BOOL)getAuthorizationStatusForOrigin:requestingURL:promptInfo:;
- (BOOL)_getAuthorizationStatusForToken:requestingURL:promptInfo:;
- (void)decidePolicyForGeolocationRequestFromOrigin:requestingURL:window:listener:;
- (void)decidePolicyForGeolocationRequestFromOrigin:requestingURL:view:listener:;
- (void)didAuthorizeGeolocationForPromptInfo:;
- (void)didDenyGeolocationForPromptInfo:;
+ (id)sharedPolicyDecider;
@end
