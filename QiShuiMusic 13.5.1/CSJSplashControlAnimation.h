@interface CSJSplashControlAnimation : NSObject
+ (id)baseAnimationWithConfiguration:;
+ (id)translationAnimationWithValues:;
+ (id)animationWithConfiguration:;
+ (id)arrowAnimationGroupWithOpacity:position:;
+ (id)groupAnimationWithConfiguration:;
+ (id)interactionGradientTrailAnimationGroup;
+ (id)interactionHandleZoomOutAnimationGroup;
+ (id)interactionRippleTranslateGradientAnimationGroup;
+ (id)interactionUnlockAnimationWithConfiguration:;
+ (id)keyFrameAnimationWithConfiguration:;
+ (id)opacityAnimationKeyframeWithValues:;
+ (id)splashControlDestColorAnimationFromValue:toValue:;
+ (id)splashControlRippleAnimationWithConfiguration:;
+ (id)splashControlShakeAnimation;
+ (id)splashControlSweepAnimation;
+ (id)splashControlZoomAnimationWithDuration:scale:;
@end
