@interface WBSURLCredentialCache : NSObject
@property (nonatomic) NSDictionary credentials;
- (id)credentials;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithCredentialFetchBlock:;
- (id)initWithCachingMode:credentialFetchBlock:;
- (void)getCredentialsWithCompletionHandler:;
@end
