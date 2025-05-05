@interface FLEXWebViewController : UIViewController
@property (nonatomic) WKWebView webView;
@property (nonatomic) NSString originalText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithNibName:bundle:;
- (id)initWithText:;
- (id)initWithURL:;
- (void)viewDidLoad;
- (void)copyButtonTapped:;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (id)webView;
- (void)setWebView:;
- (id)originalText;
- (void)setOriginalText:;
- (void).cxx_destruct;
+ (BOOL)supportsPathExtension:;
+ (id)webViewSupportedPathExtensions;
@end
