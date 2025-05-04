@interface AWEHPCommonActivityGestureManager : NSObject
+ (unsigned long long)directionForPan:;
+ (BOOL)slidingScrollViewShouldScrollWithPanGestureRecognizer:;
+ (BOOL)slidingScrollViewShouldOptimizeForPanGestureVerticalSlide;
+ (BOOL)feedTabSlidingScrollViewShouldScrollWithPan:;
+ (double)activityTabPanGestureTanValue;
@end
