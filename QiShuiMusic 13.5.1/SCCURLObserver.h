@interface SCCURLObserver : NSObject
@property (nonatomic) WKWebView webView;
@property (nonatomic) SCCWebViewConfiguration config;
@property (nonatomic) SCCEventTracker tracker;
- (void)__processResponse:withError:withURL:wasteTime:;
- (id)filterDomainFromURL:;
- (void)resetSCCStatusForWebView;
- (void)setTracker:;
- (void)setWebView:;
- (id)init;
- (id)webView;
- (id)tracker;
- (void)setConfig:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)config;
@end
