@interface BDWebViewGeneralReporter : NSObject
+ (id)ORIGImpDic;
+ (Class)bdwm_hookClass:error:;
+ (id)getDelegateIMPs:;
+ (Class)getTargetDelegateClass:;
+ (id)insertedDelegateIMPs;
+ (void)prepareForClass:;
+ (void)prepareORIGForClass:;
+ (void)reportPageStartToSDKMonitor:;
+ (void)setInsertedDelegateIMPs:;
+ (void)setORIGImpDic:;
+ (void)tryReportResourceLoaderMainFrameInfo:;
+ (void)updateMonitorOfWKWebView:statusCode:error:withType:;
+ (void)updateMonitorWithWebView:statusCode:error:type:;
@end
