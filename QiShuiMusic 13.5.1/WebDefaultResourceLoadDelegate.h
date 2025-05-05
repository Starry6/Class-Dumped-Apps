@interface WebDefaultResourceLoadDelegate : NSObject
- (id)webView:connectionPropertiesForResource:dataSource:;
- (id)webView:identifierForInitialRequest:fromDataSource:;
- (void)webView:resource:didFinishLoadingFromDataSource:;
- (void)webView:resource:didFailLoadingWithError:fromDataSource:;
- (void)webView:resource:didReceiveAuthenticationChallenge:fromDataSource:;
- (BOOL)webView:resource:canAuthenticateAgainstProtectionSpace:forDataSource:;
- (id)webView:resource:willSendRequest:redirectResponse:fromDataSource:;
- (void)webView:resource:didReceiveResponse:fromDataSource:;
- (void)webView:resource:didReceiveContentLength:fromDataSource:;
- (void)webView:plugInFailedWithError:dataSource:;
- (void)webView:didLoadResourceFromMemoryCache:response:length:fromDataSource:;
- (BOOL)webView:resource:shouldUseCredentialStorageForDataSource:;
- (id)webView:resource:willCacheResponse:fromDataSource:;
+ (id)sharedResourceLoadDelegate;
@end
