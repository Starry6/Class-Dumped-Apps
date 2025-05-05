@interface LynxBackgroundRuntime : NSObject
@property (nonatomic) LynxBackgroundRuntimeOptions options;
- (id)devtool;
- (void)evaluateJavaScript:withSources:;
- (void)addLifecycleClient:;
- (BOOL)attachToLynxView;
- (void)initDevtool;
- (id)moduleManagerPtr;
- (void)onErrorOccurred:;
- (void)removeLifecycleClient:;
- (id)runtimeActor;
- (void)sendGlobalEvent:withParams:;
- (id)timingActor;
- (void)setOptions:;
- (void)dealloc;
- (id)initWithOptions:;
- (id)options;
- (void)setObserver:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
