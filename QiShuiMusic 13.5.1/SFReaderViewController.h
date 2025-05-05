@interface SFReaderViewController : UIViewController
@property (nonatomic) WKWebView readerWebView;
@property (nonatomic) _SFBrowserContentViewController containerViewController;
@property (nonatomic) <SFReaderViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_webView:contextMenuWillPresentForElement:;
- (id)readerWebView;
- (void)_webView:contextMenuConfigurationForElement:completionHandler:;
- (void)_webView:contextMenuForElement:willCommitWithAnimator:;
- (id)containerViewController;
- (void)setDelegate:;
- (void)setContainerViewController:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_webView:contextMenuDidEndForElement:;
- (void)loadView;
- (id)initWithOriginalWebView:;
@end
