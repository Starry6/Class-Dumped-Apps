@interface BDWebViewMonitorJSSDKManager : BDHybridBaseMonitor
@property (nonatomic) @? shouldInjectJSSDKBlock;
- (void)setShouldInjectJSSDKBlock:;
- (id)shouldInjectJSSDKBlock;
- (void).cxx_destruct;
+ (id)getIMPFrom:sel:;
+ (id)scriptForTimingForWebView:domMonitor:;
+ (void)setUpGeckoEnvWithAppId:appVersion:cacheRootDirectory:deviceId:;
+ (BOOL)shouldStopUpdateJS;
+ (BOOL)startMonitorWithClasses:setting:;
+ (void)syncGeckoService;
+ (id)shared;
@end
