@interface AWEIMMessageTabFPSMonitorComponent : AWEIMComponentBase
@property (nonatomic) @? envBlock;
- (void)app_didEnterBackground;
- (void)app_willEnterForeground;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (id)envBlock;
- (void)setEnvBlock:;
- (id)p_traceDict;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
