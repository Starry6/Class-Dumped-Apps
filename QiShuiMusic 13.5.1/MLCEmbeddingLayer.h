@interface MLCEmbeddingLayer : MLCLayer
@property (nonatomic) MLCEmbeddingDescriptor descriptor;
@property (nonatomic) MLCTensor weights;
@property (nonatomic) MLCTensorParameter weightsParameter;
- (id)descriptor;
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
- (id)weightsParameter;
- (void)allocateGradientsForParameters;
- (id)initWithDescriptor:weight:;
+ (BOOL)supportsDataType:onDevice:;
+ (id)layerWithDescriptor:weights:;
@end
