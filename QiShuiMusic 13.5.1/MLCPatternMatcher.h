@interface MLCPatternMatcher : NSObject
+ (BOOL)canTransformToReLUNFromLayer:stopGradientTensorList:fusedLayers:alpha:beta:;
+ (BOOL)canTransformToHardSwishFromLayer:stopGradientTensorList:fusedLayers:inputTensor:;
+ (BOOL)canTransformToGELUFromLayer:stopGradientTensorList:fusedLayers:inputTensor:;
+ (float)getAccuracyForLayer:;
+ (BOOL)isArithmeticLayer:withOperation:;
+ (BOOL)isActivationLayer:withActivationType:;
+ (BOOL)isConstTensor:withValue:withAccuracy:;
+ (BOOL)canTransformToGELUType1FromLayer:fusedLayers:inputTensor:withAccuracy:;
+ (BOOL)canTransformToGELUType2FromLayer:fusedLayers:inputTensor:withAccuracy:;
+ (BOOL)checkIntermediateTensorsOfFusedLayers:stopGradientTensorList:forPattern:;
@end
