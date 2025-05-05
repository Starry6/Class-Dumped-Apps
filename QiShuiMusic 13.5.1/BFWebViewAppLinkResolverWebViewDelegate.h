@interface BFWebViewAppLinkResolverWebViewDelegate : NSObject
@property (nonatomic) @? didFinishLoad;
@property (nonatomic) @? didFailLoadWithError;
@property (nonatomic) BOOL hasLoaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)didFailLoadWithError;
- (id)didFinishLoad;
- (void)setDidFailLoadWithError:;
- (void)setDidFinishLoad:;
- (void)webView:didFinishNavigation:;
- (BOOL)hasLoaded;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)webView:didStartProvisionalNavigation:;
- (void)webView:didFailNavigation:withError:;
- (void)setHasLoaded:;
@end
