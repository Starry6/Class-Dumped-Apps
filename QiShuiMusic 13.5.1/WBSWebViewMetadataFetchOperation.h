@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation
@property (nonatomic) <WBSWebViewMetadataFetchOperationDelegate> delegate;
@property (nonatomic) WKWebView webView;
@property (nonatomic) WKWebViewConfiguration webViewConfiguration;
@property (nonatomic) {CGSize=dd} webViewSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (id)webView;
- (void)start;
- (void)setDelegate:;
- (void)_webViewWebProcessDidCrash:;
- (void)webView:didFailProvisionalNavigation:withError:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)webView:didFailNavigation:withError:;
- (id)webViewConfiguration;
- (void)didCreateWebView;
- (void)willClearWebView;
- (void)didFailFetch;
- (id)webViewSize;
- (void)startOffscreenFetching;
- (void)clearWebView;
- (void)_setUpWebViewAndStartOffscreenFetching;
@end
