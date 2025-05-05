@interface WBSSVGImageRenderingFetchOperation : WBSWebViewMetadataFetchOperation
@property (nonatomic) WBSSVGImageRenderingRequest request;
@property (nonatomic) @? completionHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRequest:;
- (void).cxx_destruct;
- (id)completionHandler;
- (id)initWithRequest:completionHandler:;
- (id)webViewConfiguration;
- (void)didCreateWebView;
- (void)_loadingTimerDidTimeout:;
- (void)didRenderImage:;
- (void)willClearWebView;
- (void)didFailFetch;
- (id)_htmlStringWithURL:;
- (id)_htmlStringWithSVGContent:;
- (id)_htmlStringWithImageElementString:;
- (void)_loadSVGFileURL:;
- (void)_renderNextImage;
- (void)_didCompleteWithImage:;
- (id)webViewSize;
- (void)startOffscreenFetching;
@end
