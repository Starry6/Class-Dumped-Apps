@interface ACOAuthSigner : NSObject
@property (nonatomic) BOOL shouldIncludeAppIdInRequest;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:;
- (id)signedURLRequestWithURLRequest:callingPID:timestamp:;
- (void)setShouldIncludeAppIdInRequest:;
- (id)initWithAccount:remoteEndpoint:;
- (id)signedURLRequestWithURLRequest:applicationID:timestamp:;
- (id)signedURLRequestWithURLRequest:;
- (void)_connectToRemoteOAuthSignerUsingEndpoint:;
- (void)disconnectFromRemoteOAuthSigner;
- (BOOL)shouldIncludeAppIdInRequest;
@end
