@interface WebInspectorFrontend : NSObject
- (void)detach;
- (void)attach;
- (void)close;
- (id).cxx_construct;
- (void)showConsole;
- (void)setDebuggingEnabled:;
- (BOOL)isDebuggingEnabled;
- (BOOL)isProfilingJavaScript;
- (BOOL)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:;
- (id)initWithFrontendClient:;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;
@end
