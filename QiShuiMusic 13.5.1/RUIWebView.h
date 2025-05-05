@interface RUIWebView : RUIElement
@property (nonatomic) @ delegate;
@property (nonatomic) NSString html;
@property (nonatomic) NSURL baseURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)webView:didFinishNavigation:;
- (void)setBaseURL:;
- (id)webView;
- (id)baseURL;
- (void)setDelegate:;
- (id)sourceURL;
- (void)webView:didFailProvisionalNavigation:withError:;
- (id)delegate;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)webView:didFailNavigation:withError:;
- (id)html;
- (void)setHtml:;
- (BOOL)_isScrollEnabled;
- (id)scriptForDisableMagnification;
- (id)userStyleSheet;
@end
