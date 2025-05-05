@interface MLCComputeEngineCommon : NSObject
+ (BOOL)doesActivationRequireInput:forInference:;
+ (BOOL)isResultTensorInStopGradientTensorList:resultTensor:forInference:;
+ (void)updateTensorsForFusedPaddingAndConvolutionLayer:layerNext:;
+ (void)updateLayersAndTensorsForComplexActivationFunction:inputTensor:;
+ (void)updateTensorsForTwoFusedLayers:layerNext:;
+ (void)updateTensorsForThreeFusedLayers:layerNext:layerNext2:;
+ (BOOL)forwardSourceTensorToChildLayersFrom:stopGradientTensorList:;
+ (void)applyPatternMatcherForGraph:stopGradientTensorList:startAtLayerIndex:forInference:;
@end
