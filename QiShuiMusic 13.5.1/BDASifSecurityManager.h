@interface BDASifSecurityManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdx_sccErrorBackground:;
- (id)bdx_sccErrorDescription:;
- (id)bdx_sccErrorDescriptionColor:;
- (id)bdx_sccErrorIcon:;
- (id)bdx_sccErrorRetryButton:;
- (id)bdx_sccErrorRetryButtonBackgroundColor:;
- (id)bdx_sccErrorRetryButtonColor:;
- (id)bdx_sccErrorTitle:;
- (id)bdx_sccErrorTitleColor:;
- (void)bdx_sccOnRetry:webView:errorLevel:forReason:forURL:canGoBack:sccConfig:;
- (BOOL)bdx_sccShouldInterceptWithLevel:forReason:withWebView:forURL:canGoBack:;
- (void)setupSecure;
@end
