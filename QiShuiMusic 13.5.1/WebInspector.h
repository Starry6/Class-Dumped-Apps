@interface WebInspector : NSObject
@property (nonatomic) BOOL open;
- (void)attach:;
- (void)dealloc;
- (BOOL)isOpen;
- (void)close:;
- (void)detach:;
- (void)show:;
- (void)setFrontend:;
- (void)showWindow;
- (id)initWithInspectedWebView:;
- (void)inspectedWebViewClosed;
- (void)showConsole:;
- (BOOL)isDebuggingJavaScript;
- (void)toggleDebuggingJavaScript:;
- (void)startDebuggingJavaScript:;
- (void)stopDebuggingJavaScript:;
- (BOOL)isProfilingJavaScript;
- (void)toggleProfilingJavaScript:;
- (void)startProfilingJavaScript:;
- (void)stopProfilingJavaScript:;
- (BOOL)isJavaScriptProfilingEnabled;
- (void)setJavaScriptProfilingEnabled:;
- (BOOL)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:;
- (void)evaluateInFrontend:script:;
- (void)releaseFrontend;
@end
