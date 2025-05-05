@interface WBSAggresiveURLCredentialCache : WBSURLCredentialCache
- (id)credentials;
- (void)invalidate;
- (id)initWithCredentialFetchBlock:;
- (void)getCredentialsWithCompletionHandler:;
@end
