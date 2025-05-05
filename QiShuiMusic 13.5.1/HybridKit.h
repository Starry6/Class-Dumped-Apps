@interface HybridKit : NSObject
@property (nonatomic) NSDictionary defaultGlobalProps;
- (id)kitViewWithParam:context:frame:;
- (void)configDefaultGlobalProps:;
- (void)configGlobalPropsInParams:;
- (id)createLynxViewWithParam:context:frame:;
- (id)createWebViewWithParam:context:frame:;
- (id)defaultGlobalProps;
- (BOOL)enableLynxDevtool:withOptions:;
- (void)handleOptimizedView:context:;
- (id)kitViewWithUrl:context:frame:;
- (void)registerResourceLoader:forBid:;
- (id)resolvedURLFromParam:;
- (void)setDefaultGlobalProps:;
- (void)setupCrashReportInfoWithParam:;
- (void)setupLynxKit;
- (void)setupWebKit;
- (void)unregisterResourceLoaderWithBid:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
