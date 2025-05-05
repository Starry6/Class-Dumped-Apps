@interface BDADetailWebDetectBlankHelper : NSObject
+ (void)sendDetectLogs:;
+ (void)checkWebViewHierarchy:;
+ (void)detectBlankWebBDWebView:needOldSapshotDetect:completeBlock:;
+ (void)detectBlankWebView:needOldSapshotDetect:completeBlock:;
+ (id)resultWithWebParams:screenStatus:errorInfo:dectTime:;
@end
