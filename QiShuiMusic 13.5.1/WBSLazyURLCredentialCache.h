@interface WBSLazyURLCredentialCache : WBSURLCredentialCache
- (id)credentials;
- (void)invalidate;
- (void)getCredentialsWithCompletionHandler:;
@end
