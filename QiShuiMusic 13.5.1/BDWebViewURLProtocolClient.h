@interface BDWebViewURLProtocolClient : NSObject
@property (nonatomic) <BDWebURLSchemeTask> schemeTask;
@property (nonatomic) WKWebView webView;
@property (nonatomic) BOOL isStopped;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithWebView:schemeTask:;
- (id)schemeTask;
- (void)setSchemeTask:;
- (void)setWebView:;
- (id)webView;
- (void).cxx_destruct;
- (BOOL)isStopped;
- (void)URLProtocol:wasRedirectedToRequest:redirectResponse:;
- (void)URLProtocol:cachedResponseIsValid:;
- (void)URLProtocol:didReceiveResponse:cacheStoragePolicy:;
- (void)URLProtocol:didLoadData:;
- (void)URLProtocolDidFinishLoading:;
- (void)URLProtocol:didFailWithError:;
- (void)URLProtocol:didReceiveAuthenticationChallenge:;
- (void)URLProtocol:didCancelAuthenticationChallenge:;
- (void)setIsStopped:;
@end
