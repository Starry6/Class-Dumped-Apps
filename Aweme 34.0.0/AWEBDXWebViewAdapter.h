@interface AWEBDXWebViewAdapter : NSObject
+ (id)bidWithQueryItems:;
+ (id)pageContext:queryItems:;
+ (id)bdxUrlAddCommonParams:;
+ (long long)statusBarStyleOfWebViewController:schemaParams:;
+ (id)getContainerContextWithParams:url:;
+ (id)getContainerContextByAnnieXCardWithParams:url:;
+ (id)bizGlobalPropsWithParams:;
+ (id)createWebViewController:queryItems:;
+ (id)popupBDXWebViewControllerWith:;
+ (id)createLiveWebViewController:queryItems:;
@end
