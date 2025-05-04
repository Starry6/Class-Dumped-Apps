@interface AWELiveWebViewServiceImp : NSObject
@property (nonatomic) <IESLiveTracker> tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerClass;
- (id)secureLinkBaseUrl;
- (void)registerUserAgent;
- (id)hostUserAgent;
- (id)whiteList;
- (id)piperHandlers;
- (void)registerCanvasViewForLynxView:;
- (id)XTokenHeaders;
- (void)unregisterClass;
- (BOOL)inWhiteListWith:;
- (void)registerUserAgentWithWKWebView:;
- (void)configInnerDomainsIfNeed;
- (void)addInnerDomainsFromSettings;
- (BOOL)shouldFailedOf:;
- (id)getOutSideWebViewHost;
- (id)useBtdURLEncode:;
- (void)showInjectedPanelWebViewWithURL:configData:fromVC:;
- (void)unregisterUserAgent;
- (void)configInnerDomains;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
@end
