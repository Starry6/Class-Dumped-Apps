@interface BDWebViewDelegateRegister : NSObject
+ (void)insertBlock2WKNavigationFinish:;
+ (void)insertBlock2WKNavigationFail:;
+ (void)insertBlock2WKNavigationStart:;
+ (void)insertBlock2WKRedirectStart:;
+ (void)insertBlock2WKRequestFail:;
+ (void)insertBlock2WKRequestStart:;
+ (void)insertBlock2WKResponsePolicy:;
+ (void)insertIMP2WKSetNavigationDelegate:forCls:;
+ (void)registerWKBlock:forTime:forClass:;
+ (void)startMonitorWithClasses:;
@end
