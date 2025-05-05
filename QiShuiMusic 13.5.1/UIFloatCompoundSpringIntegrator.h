@interface UIFloatCompoundSpringIntegrator : NSObject
+ (id)integrateWithState:springParameters:deltaTime:;
+ (id)advanceParametersWithState:springParameters:deltaTime:;
@end
