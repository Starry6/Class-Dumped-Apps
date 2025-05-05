@interface IESLiveSaaSPopupAnimation : NSObject
+ (id)animationShow:height:from:to:;
+ (void)animationShow:panelHeight:animation:completion:;
+ (double)durationWith:isShow:;
+ (double)standard450Height;
+ (double)standard73PercentHeight;
+ (double)standardFullHeight;
+ (double)standardHeightWith:;
+ (id)timingFunctionWith:;
@end
