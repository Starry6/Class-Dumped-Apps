@interface CSJViewTrackerHelper : NSObject
+ (BOOL)checkIfViewFullDisplayInScreen:;
+ (double)_showAreaInWindowWithView:;
+ (BOOL)checkIfViewInScreen:;
+ (BOOL)validCheckInWithView:;
+ (double)visibleAreaWithView:;
+ (double)visibleAreaWithView:superView:;
@end
