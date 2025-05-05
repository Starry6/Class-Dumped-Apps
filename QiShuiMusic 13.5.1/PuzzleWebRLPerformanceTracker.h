@interface PuzzleWebRLPerformanceTracker : NSObject
@property (nonatomic) PuzzleWebRLPerformanceTrackData trackData;
@property (nonatomic) WKWebView webview;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bdw_URLProtocolTask:didFailWithError:;
- (void)bdw_URLProtocolTaskDidFinishLoading:;
- (void)bdw_URLSchemeTask:didFailWithError:;
- (void)bdw_URLSchemeTask:didLoadData:;
- (void)bdw_URLSchemeTask:didPerformRedirection:newRequest:;
- (void)bdw_URLSchemeTask:didReceiveResponse:;
- (void)bdw_URLSchemeTaskDidFinishLoading:;
- (id)initWithWebView:context:;
- (void)recordFromProtocolTask:;
- (void)recordFromSchemeTask:;
- (void)reportWithOriginDict:webview:;
- (void)viewDidFinishLoadWithURL:;
- (void)viewDidStartLoading;
- (id)initWithWebView:;
- (void).cxx_destruct;
- (id)trackData;
- (void)setTrackData:;
- (id)webview;
- (void)setWebview:;
+ (void)setupPerfTrackerForWebView:;
@end
