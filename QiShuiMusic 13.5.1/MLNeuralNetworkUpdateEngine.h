@interface MLNeuralNetworkUpdateEngine : MLNeuralNetworkV1Engine
@property (nonatomic) MLUpdateProgressHandlers progressHandlers;
@property (nonatomic) NSObject<OS_dispatch_queue> progressHandlersDispatchQueue;
@property (nonatomic) NSDictionary coreMLToEspressoParamsMap;
@property (nonatomic) NSString lossOutputName;
@property (nonatomic) NSString lossTargetName;
@property (nonatomic) BOOL continueWithUpdate;
@property (nonatomic) MLShufflingBatchProvider shuffableTrainingData;
@property (nonatomic) MLParameterContainer parameterContainer;
@property (nonatomic) ETTaskState snapshot;
@property (nonatomic) ETTaskDefinition task;
@property (nonatomic) NSDictionary classLabelToIndexMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)parameterValueForKey:error:;
- (void)setCoreMLToEspressoParamsMap:;
- (void)setSnapshot:;
- (id)predictionsFromBatch:error:;
- (BOOL)updateWeightsAndBiasesFromConfigParams:error:;
- (id)lossTargetName;
- (void)updateModelWithData:;
- (void)setContinueWithUpdate:;
- (id)parameterValueForKey:;
- (id)classLabelToIndexMap;
- (id)shuffableTrainingData;
- (void)cancelUpdate;
- (BOOL)continueWithUpdate;
- (void)setProgressHandlersDispatchQueue:;
- (id)predictionFromFeatures:options:error:;
- (void)setLossTargetName:;
- (id)task;
- (BOOL)setWeightsOrBiasesForLayer:layerType:value:error:;
- (id)weightsForLayer:error:;
- (id)parameterContainer;
- (BOOL)writeToURL:error:;
- (id)progressHandlersDispatchQueue;
- (id)predictionsFromBatch:options:error:;
- (id)initWithCoder:;
- (id)initWithCompiledArchive:nnContainer:configuration:error:;
- (id)coreMLToEspressoParamsMap;
- (id)paramsForLayer:parameterType:error:;
- (void)setShuffableTrainingData:;
- (void)resumeUpdateWithParameters:;
- (id)lossOutputName;
- (void)resumeUpdate;
- (void)setProgressHandlers:;
- (void)setTask:;
- (void)encodeWithCoder:;
- (void)setUpdateProgressHandlers:dispatchQueue:;
- (id)progressHandlers;
- (BOOL)updateLearningRateWithTaskContext:isInCallBack:error:;
- (void)setParameterContainer:;
- (id)updateParameters;
- (void)loadLossInputName:updatableLayerNames:fromCompiledArchive:;
- (void)loadLossTargetName:lossOutputName:fromUpdateParameters:;
- (void).cxx_destruct;
- (id)snapshot;
- (id)predictionFromFeatures:error:;
- (id)collectMetricsFromTaskContext:isInCallBack:;
- (void)setLossOutputName:;
- (id)createEspressoTaskFrom:updateParameters:lossInputName:lossTargetName:lossOutputName:updatableLayerNames:configuration:error:;
- (id)stringForDataType:;
- (id)biasForLayer:error:;
+ (BOOL)supportsSecureCoding;
+ (id)createCoreMLToEspressoParamsMap;
+ (id)loadModelFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
@end
