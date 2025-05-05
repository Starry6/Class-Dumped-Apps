@interface DCImageAnalyzerManager : NSObject
- (id)init;
- (void)cleanup;
- (void).cxx_destruct;
- (void)analysisForImage:completionHandler:;
+ (id)sharedInstance;
+ (BOOL)isImageAnalysisEnabled;
@end
