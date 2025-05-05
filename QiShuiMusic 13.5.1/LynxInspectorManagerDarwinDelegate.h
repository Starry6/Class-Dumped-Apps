@interface LynxInspectorManagerDarwinDelegate : NSObject
- (long long)GetFirstPerfContainer;
- (long long)GetLynxDevtoolFunction;
- (void)RunOnJSThread:;
- (void)SendConsoleMessage:withLevel:withTimStamp:;
- (void)call:withParam:;
- (long long)createInspectorRuntimeManagerDelegate;
- (long long)getJavascriptDebugger;
- (long long)getLepusDebugger:;
- (id)getNativePtr;
- (long long)getTemplateApiDefaultProcessor;
- (long long)getTemplateApiProcessorMap;
- (void)onBackgroundRuntimeCreated:;
- (void)onTemplateAssemblerCreated:;
- (void)sendTouchEvent:sign:x:y:onLynxView:;
- (void)setLynxEnvKey:withValue:;
- (id)initWithOwner:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
