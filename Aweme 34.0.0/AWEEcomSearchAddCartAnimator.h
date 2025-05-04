@interface AWEEcomSearchAddCartAnimator : NSObject
+ (id)createBasicAnimationWithType:from:to:duration:;
+ (id)calculateControlPointWithStartPoint:endPoint:;
+ (id)createBezierAnimationWithStartPoint:endPoint:controlPoint:duration:;
+ (void)addCartAnimationWithContainerView:animationDelegate:animationLayer:startPoint:endPoint:;
@end
