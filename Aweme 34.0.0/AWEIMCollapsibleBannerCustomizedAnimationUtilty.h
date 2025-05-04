@interface AWEIMCollapsibleBannerCustomizedAnimationUtilty : NSObject
+ (id)setupMovingAnimationForView:targetPotion:duration:timingFunction:;
+ (id)setupExpendingAnimationForView:targetFrame:duration:timingFunction:delegate:;
+ (id)setupOpacityAnimationForView:targetOpacity:duration:timingFunction:;
+ (id)setupBackgroundAnimationForView:targetColor:duration:timingFunction:;
@end
