@interface SOAuthorizationResultClientImpl : NSObject
@property (nonatomic) @? authorizationHandleResponseCompletion;
@property (nonatomic) @? authorizationHandleCredentialCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)authorizationDidNotHandle:;
- (void)authorizationDidCancel:;
- (void)authorizationDidComplete:;
- (void)authorization:didCompleteWithHTTPAuthorizationHeaders:;
- (void)authorization:didCompleteWithHTTPResponse:httpBody:;
- (void)authorization:didCompleteWithError:;
- (id)authorizationHandleResponseCompletion;
- (void)setAuthorizationHandleResponseCompletion:;
- (id)authorizationHandleCredentialCompletion;
- (void)setAuthorizationHandleCredentialCompletion:;
@end
