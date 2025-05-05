@interface UIFloatSpringIntegrator : NSObject
+ (double)displacementFromValue:toTarget:function:;
+ (id)integrateWithState:springParameters:deltaTime:;
@end
