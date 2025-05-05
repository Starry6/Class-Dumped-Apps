@interface BDHMWebViewBlankDetection : NSObject
+ (void)_blankEventWithPerfDic:detectionModel:detecionResultModel:;
+ (void)_fetchBlankDetectionResultWithImage:completionBlock:;
+ (void)_preActionOfBlankDetectionImage:detectionModel:resultModel:group:;
+ (void)blankDetectionWithWebView:detectionModel:;
+ (void)snapshotWithWebView:detectionModel:completion:;
@end
