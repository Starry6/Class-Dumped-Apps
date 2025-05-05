@interface CJPayWebViewBlankDetect : NSObject
+ (void)snapshotWithWebView:completion:;
+ (void)blankDetectionWithWebView:stayTime:;
+ (BOOL)calculateIsPureColor:dataLength:customColorDiff:;
+ (BOOL)imageIsPureColor:customColorDiff:;
@end
