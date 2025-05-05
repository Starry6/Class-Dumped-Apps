@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController
@property (nonatomic) <WBSTouchIconObserver> touchIconObserver;
- (void)webProcessPlugInBrowserContextController:didHandleOnloadEventsForFrame:;
- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:didFinishDocumentLoadForFrame:;
- (id)webProcessPlugInBrowserContextController:frame:willSendRequestForResource:request:redirectResponse:;
- (void)webProcessPlugInBrowserContextController:frame:didInitiateLoadForResource:request:pageIsProvisionallyLoading:;
- (id)touchIconObserver;
- (id)_extractTouchIconURLsIncludingDefaultURLs:didExtractNonDefaultIconURLs:;
- (id)_extractFaviconURLsIncludingDefaultURLs:didExtractNonDefaultIconURLs:;
@end
