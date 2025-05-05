@interface MLCLayerNormalizationLayer : MLCLayer
@property (nonatomic) NSArray normalizedShape;
@property (nonatomic) MLCTensor beta;
@property (nonatomic) MLCTensor gamma;
@property (nonatomic) MLCTensorParameter betaParameter;
@property (nonatomic) MLCTensorParameter gammaParameter;
@property (nonatomic) float varianceEpsilon;
- (id)beta;
- (id)gamma;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)parametersCount;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (BOOL)allocateDataForOptimizer:;
- (unsigned long long)allocatedDataSizeForTraining:optimizer:;
- (id)summarizedDOTDescription;
- (void)linkAssociatedTensors;
- (void)unlinkAssociatedTensors;
- (BOOL)isValidTrainingParameters;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)betaParameter;
- (id)gammaParameter;
- (float)varianceEpsilon;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
- (id)normalizedShape;
- (id)initWithNormalizedShape:beta:gamma:varianceEpsilon:;
+ (id)layerWithNormalizedShape:beta:gamma:varianceEpsilon:;
@end
