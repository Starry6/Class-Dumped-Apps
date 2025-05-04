@interface AWEHotSearchShareTracker : NSObject
+ (void)trackHotSearchPageHasScreenshot:;
+ (void)trackWithErrorType:extra:;
+ (void)trackPerformanceWithModel:;
+ (id)errorType2Message:;
@end
