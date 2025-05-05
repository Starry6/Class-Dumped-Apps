@interface NSURLSessionTaskLocalHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator
@property (nonatomic) <NSURLSessionAppleIDContext> externalAuthenticator;
- (void)dealloc;
- (id)initWithSessionAuthenticator:statusCodes:;
- (void)getAuthenticationHeadersForTask:task:response:completionHandler:;
- (void)setExternalAuthenticator:;
- (id)externalAuthenticator;
@end
