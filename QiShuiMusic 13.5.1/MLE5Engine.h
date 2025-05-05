@interface MLE5Engine : MLModel
@property (nonatomic) MLE5ExecutionStreamPool streamPool;
@property (nonatomic) MLE5ExecutionStreamOperationPool operationPool;
@property (nonatomic) NSString classProbabilitiesFeatureName;
@property (nonatomic) @ classLabelsSharedKey;
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) MLModelMetadata metadata;
- (id)regress:options:error:;
- (id)classify:options:error:;
- (id)classLabels;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (id)initWithE5BundleAtURL:modelDescription:classProbabilitiesFeatureName:;
- (id)_predictionFromFeatures:options:error:;
- (id)_predictionFromFeatures:options:usingStream:operation:error:;
- (id)_outputFeaturesByAddingClassifierResultTo:classifyTopK:error:;
- (id)_classifierResultFromOutputFeatures:classifyTopK:error:;
- (id)_probabilityDictionaryWithMultiArray:classifyTopK:;
- (id)_classProbabilitiesInOutputFeatures:error:;
- (id)streamPool;
- (id)operationPool;
- (id)classProbabilitiesFeatureName;
- (id)classLabelsSharedKey;
@end
