@interface IESLivePopupAnimation : NSObject
+ (id)animationShow:length:from:to:;
+ (id)animationShow:length:isDirectionLandscape:from:to:;
+ (void)animationShow:panelDiffLength:animation:completion:;
+ (void)animationShow:panelDiffLength:isDirectionLandscape:animation:completion:;
+ (double)durationWith:isShow:;
+ (double)durationWith:isShow:isDirectionLandscape:;
+ (double)standard450Height;
+ (double)standard73PercentHeight;
+ (double)standardFullHeight;
+ (double)standardHeightWith:;
+ (id)timingFunctionWith:;
+ (id)timingFunctionWith:isDirectionLandscape:;
@end
