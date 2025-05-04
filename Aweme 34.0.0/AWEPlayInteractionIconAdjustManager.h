@interface AWEPlayInteractionIconAdjustManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (long long)lottieType;
+ (BOOL)shouldAdjustLottie;
+ (BOOL)shouldAdjustIcon;
+ (BOOL)shouldReplaceIconForBtnType:;
+ (id)nameOfIconForBtnType:withMask:;
+ (id)nameOfSelectedIconForBtnType:withMask:;
+ (BOOL)shouldReplaceLottieForBtnType:;
+ (id)lottieNameForBtnType:model:referString:;
+ (id)geckoPathWithLottieName:forBtnType:model:;
+ (BOOL)shouldUseDefaultLottieForBtnType:;
+ (id)beginFrameForBtnType:toActiveState:;
+ (id)endFrameForBtnType:toActiveState:;
+ (id)getExperimentSetting;
+ (id)nameOfLottieForBtnType:lottieType:withMask:;
+ (id)iconNameForBtnType:model:referString:;
+ (id)selectedIconNameForBtnType:model:referString:;
+ (id)lottieForBtnType:model:referString:;
+ (void)playAnimationWithView:forBtnType:toActiveState:completion:;
@end
