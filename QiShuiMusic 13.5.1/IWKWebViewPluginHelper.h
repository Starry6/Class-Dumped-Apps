@interface IWKWebViewPluginHelper : NSObject
+ (void)duplicateCheck:inContainer:;
+ (id)runPlugins:extra:withHandleBlock:;
+ (id)runPlugins:webview:selector:lifecycle:extra:withHandleBlock:;
+ (id)runPlugins:withHandleBlock:;
@end
