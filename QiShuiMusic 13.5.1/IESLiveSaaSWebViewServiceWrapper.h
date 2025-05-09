@interface IESLiveSaaSWebViewServiceWrapper : NSObject
@property (nonatomic) <IESLiveSaaSWebViewService> service;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)unregisterClass;
- (void)registerUserAgentWithWKWebView:;
- (BOOL)shouldFailedOf:;
- (id)XTokenHeaders;
- (void)addInnerDomainsFromSettings;
- (void)closeForceOffline;
- (void)configInnerDomainsIfNeed;
- (BOOL)enableLynxGestureConflictFix;
- (id)fetchSystemUserAgent;
- (id)fetchTaroPathIfExists;
- (id)fetchTaroPathIfExists:;
- (void)forceFetchSystemUserAgent;
- (void)forceOffline;
- (id)getOutSideWebViewHost;
- (id)hostUserAgent;
- (BOOL)inWhiteListWith:;
- (id)initWithWebViewService:;
- (BOOL)isOfflineForURL:;
- (id)jsBridgeHandlers;
- (void)registerClass;
- (void)showInjectedPanelWebViewWithURL:config:fromVC:;
- (id)useBtdURLEncode:;
- (id)whiteList;
- (void)setService:;
- (id)service;
- (void).cxx_destruct;
- (id)placeHolderView;
@end
