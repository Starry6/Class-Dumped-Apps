@interface AWESearchWebTranscodeContainer : NSObject
@property (nonatomic) AWESearchWebTranscodeContainerContext context;
@property (nonatomic) <AWESearchWebTranscodeBussinessProtocol> bussiness;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)webViewWillDealloc:;
- (id)webView:loadRequest:;
- (id)webView:loadData:MIMEType:characterEncodingName:baseURL:;
- (id)webView:loadHTMLString:baseURL:;
- (id)transcodingManager;
- (id)currentTranscodingManager;
- (void)updateWithContainerContext:;
- (void)webViewOnLoad:;
- (void)setBussiness:;
- (id)bussiness;
- (id)webView:didFinishNavigation:;
- (id)webView:didStartProvisionalNavigation:;
- (id)webView:didCommitNavigation:;
- (id)webView:didFailNavigation:withError:;
- (void)setContext:;
- (id)webView:didFailProvisionalNavigation:withError:;
- (void).cxx_destruct;
- (id)context;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
@end
