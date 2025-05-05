@interface LynxCanvasHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onNapiEnvReady:;
- (void)onRuntimeDetach;
- (id)createCanvasRuntimeMediator;
- (id)getCanvasManager;
- (BOOL)isCanvasRegistered;
- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (void)onRuntimeDestroy;
- (void)onRuntimeInit:;
- (void)onRuntimeMediatorDestroy;
- (void)onRuntimeMediatorReady:;
- (void)registerCanvasRuntimeMediatorWeak:;
- (void)registerService:withImpl:;
- (void)setTaskRunner:;
- (void)setupWithTemplateRender:;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setTemporaryDirectory:;
@end
