@interface PIAPrefetchFunctionPlugin : NSObject
@property (nonatomic) WKWebView webView;
@property (nonatomic) PIAWorker worker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)PIAWorker:didExecuteScriptURL:executeMetrics:;
- (void)PIAWorker:didReceiveError:;
- (void)injectBridgeAPI;
- (void)PIAWorker:didFetchScriptURL:fetchMetrics:error:;
- (void)PIAWorker:didReceiveMessage:;
- (void)PIAWorker:willFetchScriptURL:;
- (void)engine:onLoadStart:;
- (void)engine:onURLChange:;
- (id)getOnPageReadyParams;
- (void)onEngineDestroy:;
- (void)releaseWorker;
- (void)startPrefetchWithEngine:URL:;
- (void)willPIAWorkerCreate:;
- (void)setWebView:;
- (id)webView;
- (void).cxx_destruct;
- (id)worker;
- (void)setWorker:;
+ (void)addPrefetchEnabledPVEvent:engine:;
+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;
@end
