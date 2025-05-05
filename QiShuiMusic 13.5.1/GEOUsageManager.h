@interface GEOUsageManager : NSObject
- (void)captureMapsResultsDisplayedFeedbackForQueryString:resultsArray:;
+ (id)sharedManager;
@end
