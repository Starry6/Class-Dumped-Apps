@interface IESLiveSaaSHybridManager : NSObject
@property (nonatomic) NSArray innerDomains;
@property (nonatomic) BOOL hasInjectedBaseInnerDomains;
@property (nonatomic) NSString systemUserAgent;
@property (nonatomic) WKWebView uaWebView;
@property (nonatomic) <IESLiveSaaSLanguageService> languageService;
@property (nonatomic) <IESLiveSaaSWebViewService> webViewService;
@property (nonatomic) <IESLiveSaaSDebugService> debugService;
- (void)setHasInjectedBaseInnerDomains:;
- (id)languageService;
- (void)registerUserAgentWithWKWebView:;
- (id)systemUserAgent;
- (id)absoluteUserAgent;
- (void)addInnerDomainsFromSettings;
- (void)addPrivateDomains:;
- (void)buildInnerDomains;
- (void)configInnerDomainsIfNeed;
- (id)debugService;
- (id)didReceiveSystemUA:;
- (id)extraJSPathFromCDNWithURL:lynxRuntimeFileName:;
- (id)extraJSPathFromGeckoWithURL:lynxRuntimeFileName:metaData:;
- (id)fetchSystemUserAgent;
- (id)fetchTaroPathIfExists;
- (id)fetchTaroPathIfExists:;
- (id)forceFetchSystemUserAgent;
- (BOOL)hasInjectedBaseInnerDomains;
- (id)hostUserAgent;
- (BOOL)inWhiteListWith:;
- (id)innerDomains;
- (BOOL)isOfflineForURL:;
- (void)setDebugService:;
- (void)setInnerDomains:;
- (void)setLanguageService:;
- (void)setSystemUserAgent:;
- (void)setUaWebView:;
- (void)setWebViewService:;
- (id)uaRemoveBlankIfNeed:;
- (id)uaWebView;
- (id)webViewService;
- (id)whiteList;
- (id)init;
- (id)customUserAgent;
- (void).cxx_destruct;
+ (id)shared;
@end
