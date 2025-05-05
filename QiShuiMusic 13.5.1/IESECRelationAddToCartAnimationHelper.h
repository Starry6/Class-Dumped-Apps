@interface IESECRelationAddToCartAnimationHelper : NSObject
+ (void)addToCartAnimationOnViewController:withStartPoint:endPoing:;
+ (void)addToCartAnimationOnViewController:withStartPoint:endPoint:animationSpeed:redPointRadius:scaleSize:endOpacity:completion:;
+ (void)animateAddToCartOnView:image:fromRect:toCenterPoint:;
+ (id)p_caculateControlPointWithStartPoint:endPoint:;
@end
