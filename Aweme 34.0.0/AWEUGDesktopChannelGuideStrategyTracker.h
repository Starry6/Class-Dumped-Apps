@interface AWEUGDesktopChannelGuideStrategyTracker : NSObject
+ (void)trackActionResultWithParams:;
+ (void)trackActionCountWithParams:needShow:;
+ (void)trackMidGuideWithAction:params:;
+ (void)trackIfNeededWithAction:params:;
+ (void)trackActionForServerWithAction:params:;
+ (void)updateTrackActionResultWithParams:;
+ (void)trackPreloadCountWithParams:;
+ (void)trackPreloadResultWithParams:;
+ (void)trackCheckCanShowCountWithParams:;
+ (void)trackCheckCanShowResultWithParams:;
+ (void)reportTrackActionResultIfNeed;
+ (id)buildTrackActionParamsWithModel:responseModel:;
@end
