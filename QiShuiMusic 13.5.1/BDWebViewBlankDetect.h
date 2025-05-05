@interface BDWebViewBlankDetect : NSObject
+ (void)addBlankDetectMonitorListener:;
+ (void)detectBlankByNewSnapshotWithWKWebView:CompleteBlock:;
+ (void)detectBlankByNewSnapshotWithWKWebView:needNonBlankRatio:CompleteBlockV2:;
+ (void)detectBlankByOldSnapshotWithView:CompleteBlock:;
@end
