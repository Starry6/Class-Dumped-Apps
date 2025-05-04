@interface AWEHPSkylightAnimator : NSObject
+ (void)showClosingAnimationWithType:withSkylightView:withUnderTakeHost:withCompletion:;
+ (void)showExpandingAnimationWithType:withSkylightView:withUnderTakeHost:withCompletion:;
+ (void)showExpandedUIConfigChangeAnimationWithType:withNewExpandedUIConfig:withSkylightView:withUnderTakeHost:withCompletion:;
+ (void)p_showUpsideHostClosingDefaultAnimateWithModel:withSkylightView:withUnderTakeHost:withCompletion:;
+ (void)p_setUpsideHostClosedFrameWithSkylightContainer:withUnderTakeHost:;
+ (void)p_showUpsideHostExpandingDefaultAnimateWithModel:withSkylightView:withUnderTakeHost:withCompletion:;
+ (void)p_setUpsideHostExpandedFrameWithUIConfig:withSkylightContainer:withUnderTakeHost:;
+ (void)p_showUpsideHostExpandedUIConfig:withDefaultAnimateWithModel:withSkylightView:withUnderTakeHost:withCompletion:;
+ (void)p_homepageSkylightAnimateAccessApproach:willAnimateWithModel:;
+ (void)p_homepageSkylightAnimateUnderTakeHost:willAnimateWithModel:;
+ (void)p_homepageSkylightAnimateAccessApproach:animatingWithModel:;
+ (void)p_homepageSkylightAnimateUnderTakeHost:animatingWithModel:;
+ (void)p_homepageSkylightAnimateAccessApproach:didAnimateWithModel:;
+ (void)p_homepageSkylightAnimateUnderTakeHost:didAnimateWithModel:;
@end
