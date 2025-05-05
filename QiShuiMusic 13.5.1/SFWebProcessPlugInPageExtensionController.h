@interface SFWebProcessPlugInPageExtensionController : NSObject
- (void)dealloc;
- (void)_clearExtensionControllerInterface;
- (void)clearExtensionScriptWorlds;
- (void)evaluateJavaScriptForSharingExtension:extraArguments:completionHandler:;
- (void).cxx_destruct;
- (id)initWithBrowserContextController:;
- (void)_setUpExtensionControllerInterface;
- (void)finalizeJavaScriptForSharingExtension:arguments:;
- (void)prepareJavaScriptWorldForSharingExtension:javaScript:;
@end
