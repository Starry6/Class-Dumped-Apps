@interface STAd.BDAWebViewController : UIViewController
- (void)webView:didFailLoadWithError:;
- (BOOL)webView:shouldStartLoadWithRequest:navigationType:;
- (void)webViewDidStartLoad:;
- (void)webViewDidFinishLoad:;
- (void)dealloc;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
