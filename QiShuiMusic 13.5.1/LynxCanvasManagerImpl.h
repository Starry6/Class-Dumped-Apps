@interface LynxCanvasManagerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onNapiEnvReady:;
- (void)onRuntimeDetach;
- (id)getApp;
- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (void)onRuntimeDestroy;
- (void)onRuntimeInit:;
- (void)onRuntimeMediatorDestroy;
- (void)onRuntimeMediatorReady:;
- (void)registerDefaultServices;
- (void)registerKryptonLog;
- (void)registerReflectLoadedServices;
- (void)registerService:withImpl:;
- (void)setTaskRunner:;
- (void)setupWithTemplateRender:;
- (id)init;
- (void).cxx_destruct;
- (void)setTemporaryDirectory:;
@end
