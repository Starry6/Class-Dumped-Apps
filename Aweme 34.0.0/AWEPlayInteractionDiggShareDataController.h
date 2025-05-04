@interface AWEPlayInteractionDiggShareDataController : NSObject
+ (BOOL)shouldShowDiggShareElementByFrequencyControlAndReset:;
+ (long long)maxExitShowCountWithNotClick;
+ (double)maxExitHoursAfterShow;
+ (void)p_resetFrequency;
+ (id)diggFeedGuideToIMDict;
@end
