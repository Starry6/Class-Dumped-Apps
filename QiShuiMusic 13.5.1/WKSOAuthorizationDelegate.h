@interface WKSOAuthorizationDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSession:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)authorizationDidNotHandle:;
- (void)authorizationDidCancel:;
- (void)authorizationDidComplete:;
- (void)authorization:didCompleteWithHTTPAuthorizationHeaders:;
- (void)authorization:didCompleteWithHTTPResponse:httpBody:;
- (void)authorization:didCompleteWithError:;
- (void)authorization:presentViewController:withCompletion:;
@end
