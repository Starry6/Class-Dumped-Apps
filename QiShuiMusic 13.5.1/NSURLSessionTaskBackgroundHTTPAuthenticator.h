@interface NSURLSessionTaskBackgroundHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator
- (void)dealloc;
- (void)getAuthenticationHeadersForTask:task:response:completionHandler:;
- (id)initWithStatusCodes:;
@end
