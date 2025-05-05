@interface PSWebContainerView : UIView
@property (nonatomic) UIWebView webView;
@property (nonatomic) NSData content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)content;
- (void)setContent:;
- (id)init;
- (id)webView;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setUserStyleSheet:;
- (BOOL)uiWebView:previewIsAllowedForPosition:;
- (BOOL)webView:shouldStartLoadWithRequest:navigationType:;
- (double)heightForWidth:;
@end
