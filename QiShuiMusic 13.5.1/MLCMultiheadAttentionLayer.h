@interface MLCMultiheadAttentionLayer : MLCLayer
@property (nonatomic) MLCMultiheadAttentionDescriptor descriptor;
@property (nonatomic) NSArray weights;
@property (nonatomic) NSArray biases;
@property (nonatomic) NSArray attentionBiases;
@property (nonatomic) NSArray weightsParameters;
@property (nonatomic) NSArray biasesParameters;
- (id)descriptor;
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
- (void)allocateGradientsForParameters;
- (id)initWithDescriptor:weights:bias:attentionBias:;
- (id)attentionBiases;
- (id)weightsParameters;
- (id)biasesParameters;
+ (id)layerWithDescriptor:weights:biases:attentionBiases:;
@end
