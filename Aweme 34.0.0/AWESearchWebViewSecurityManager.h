@interface AWESearchWebViewSecurityManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)bdx_sccShouldInterceptWithLevel:forReason:withWebView:forURL:canGoBack:;
- (void)bdx_sccDidInterceptWithLevel:forReason:withWebView:forURL:canGoBack:;
- (BOOL)bdx_sccShouldSkipChecking:forURL:sccConfig:;
- (void)bdx_sccOnRetryWithRiskInfo:withErrorView:withWebView:forURL:sccConfig:;
- (id)bdx_sccFetchSeclinkParameter;
- (id)bdx_sccFetchExtraInfo;
- (void)bdx_noticeDisableCreateErrorView:withWebView:forURL:;
- (id)bdx_sccErrorViewConfig:;
- (void)setupSecure;
- (id)searchWebSecurityContentConfig;
- (void)trackSCCJumpRejectClickWithWebView:clickButton:;
- (void)trackSCCJumpRejectWithWebView:;
- (BOOL)needTrackSccPageBack;
- (BOOL)needTrackRequestURL;
- (id)commonTrackParamsWithWebView:;
@end
