@interface DYSDKPopupAnimation : NSObject
+ (void)animationShow:panelHeight:animation:completion:;
+ (double)durationWith:isShow:;
+ (BOOL)hasSafeArea;
+ (double)standardHeightWith:;
+ (id)timingFunctionWith:;
@end
