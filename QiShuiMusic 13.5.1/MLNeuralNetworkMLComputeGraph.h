@interface MLNeuralNetworkMLComputeGraph : NSObject
@property (nonatomic) MLCGraph graph;
@property (nonatomic) MLCTrainingGraph trainingGraph;
@property (nonatomic) MLCInferenceGraph inferenceGraph;
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) NSDictionary mlcInputs;
@property (nonatomic) NSDictionary mlcLabels;
@property (nonatomic) Q executionOptions;
@property (nonatomic) NSDictionary layersMap;
@property (nonatomic) BOOL layerFusedToLoss;
@property (nonatomic) NSString fusedLayerInputName;
@property (nonatomic) MLCDevice device;
@property (nonatomic) NSDictionary outputNameToLayerMap;
@property (nonatomic) BOOL classifierOutputIsSigmoidOutput;
- (id)graph;
- (void)setGraph:;
- (void)setClassifierOutputIsSigmoidOutput:;
- (void)setDevice:;
- (unsigned long long)executionOptions;
- (id)modelDescription;
- (void).cxx_destruct;
- (void)setExecutionOptions:;
- (id)device;
- (BOOL)classifierOutputIsSigmoidOutput;
- (void)setModelDescription:;
- (id)inputTensorMapWithBatchSize:numberOfClasses:error:;
- (id)labelTensorMapWithBatchSize:numberOfClasses:error:;
- (id)initWithCompiledArchive:modelDescription:batchSize:numberOfClasses:computeUnits:error:;
- (id)lossInputsFromUpdateParams:;
- (id)buildTrainingGraphFrom:updateParams:numberOfClasses:mlcTensorByName:error:;
- (id)buildInferenceGraph:updateParams:layers:mlcTensorByName:outputNameToLayerMap:error:;
- (BOOL)buildGraphsFor:batchSize:numberOfClasses:error:;
- (id)buildMLComputeTensorDescriptorWith:featureName:batchSize:numberOfClasses:error:;
- (int)mlcDeviceTypeForComputeUnit:;
- (BOOL)copyWeightsFrom:to:error:;
- (BOOL)saveUpdatedWeightsTo:error:;
- (id)createMultiArrayFromTensor:error:;
- (id)getWeightsForLayerNamed:error:;
- (id)getBiasesForLayerNamed:error:;
- (id)trainingGraph;
- (void)setTrainingGraph:;
- (id)inferenceGraph;
- (void)setInferenceGraph:;
- (id)mlcInputs;
- (void)setMlcInputs:;
- (id)mlcLabels;
- (void)setMlcLabels:;
- (id)outputNameToLayerMap;
- (id)layersMap;
- (void)setLayersMap:;
- (BOOL)layerFusedToLoss;
- (void)setLayerFusedToLoss:;
- (id)fusedLayerInputName;
- (void)setFusedLayerInputName:;
+ (id)graphFromCompiledArchive:modelDescription:batchSize:numberOfClasses:computeUnits:error:;
@end
