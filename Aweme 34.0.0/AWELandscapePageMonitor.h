@interface AWELandscapePageMonitor : NSObject
+ (void)trackTransitionWithPhase:duration:entering:enterFrom:extraParams:;
+ (void)trackWrongTransitionWithEnterTime:fromVC:toVC:fromCP:toCP:;
@end
