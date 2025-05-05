@interface RUIWebContainerView : UIView
@property (nonatomic) UIWebView webView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) <RUIWebContainerViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)webView;
- (void)layoutSubviews;
- (void)setDelegate:;
- (BOOL)isHighlighted;
- (id)delegate;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)setUserStyleSheet:;
- (BOOL)uiWebView:previewIsAllowedForPosition:;
- (BOOL)webView:shouldStartLoadWithRequest:navigationType:;
- (void)webViewDidFinishLoad:;
- (double)heightForWidth:;
- (void)updateContent:;
- (void)_setHighlightedNow;
- (id)initWithContent:baseURL:;
- (id)_jsBridgeURLWithPath:;
- (void)_addContentChangeObservingScript;
- (BOOL)_handleJavascriptBridgeRequest:;
@end
