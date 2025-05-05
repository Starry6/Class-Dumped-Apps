@interface LynxTemplateRenderDelegateExternal : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)templateRender:onErrorOccurred:;
- (void)templateRender:didInvokeMethod:inModule:errorCode:;
- (void)templateRender:onCallJSBFinished:;
- (void)templateRender:onJSBInvoked:;
- (void)templateRender:onPageChanged:;
- (void)templateRender:onReceiveDynamicComponentPerf:;
- (void)templateRender:onReceiveFirstLoadPerf:;
- (void)templateRender:onTemplateLoaded:;
- (void)templateRender:onUpdatePerf:;
- (id)templateRender:translatedResourceWithId:themeKey:;
- (void)templateRenderOnDataUpdated:;
- (void)templateRenderOnDetach:;
- (void)templateRenderOnFirstScreen:;
- (void)templateRenderOnPageUpdate:;
- (void)templateRenderOnResetViewAndLayer:;
- (void)templateRenderOnRuntimeReady:;
- (void)templateRenderOnTasmFinishByNative:;
- (void)templateRenderOnTemplateStartLoading:;
@end
