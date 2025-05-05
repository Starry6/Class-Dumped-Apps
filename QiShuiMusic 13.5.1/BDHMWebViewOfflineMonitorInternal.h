@interface BDHMWebViewOfflineMonitorInternal : NSObject
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
- (void)handleProtocolTask:;
- (void)handleSchemeTask:;
- (void)reportWithOriginDict:webview:;
+ (id)shared;
@end
