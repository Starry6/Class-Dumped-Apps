@interface MLCFullyConnectedLayer : MLCLayer
@property (nonatomic) NSInteger accumulatorPrecisionOption;
@property (nonatomic) MLCConvolutionDescriptor descriptor;
@property (nonatomic) MLCTensor weights;
@property (nonatomic) MLCTensor biases;
@property (nonatomic) MLCTensorParameter weightsParameter;
@property (nonatomic) MLCTensorParameter biasesParameter;
- (id)descriptor;
- (int)accumulatorPrecisionOption;
- (id)biases;
- (id)weights;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)parametersCount;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (BOOL)allocateDataForOptimizer:;
- (unsigned long long)allocatedDataSizeForTraining:optimizer:;
- (id)summarizedDOTDescription;
- (void)linkAssociatedTensors;
- (void)unlinkAssociatedTensors;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (id)initWithWeights:biases:descriptor:;
- (id)weightsParameter;
- (id)biasesParameter;
+ (id)innerProductLayer:error:;
+ (id)innerProductLayerWithBatchedMatMulParams:error:;
+ (id)layerWithWeights:biases:descriptor:;
@end
