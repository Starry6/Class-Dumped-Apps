@interface MLTreeEnsembleXGBoostClassifier : MLClassifier
@property (nonatomic) NSArray labelsForDataPoints;
@property (nonatomic) NSURL modelURL;
@property (nonatomic) NSString objective;
@property (nonatomic) Q numClasses;
@property (nonatomic) ^v booster;
- (id)predictionsFromBatch:error:;
- (void)dealloc;
- (id)predictionFromFeatures:options:error:;
- (id)predictionsFromBatch:options:error:;
- (id)modelURL;
- (void)setModelURL:;
- (void).cxx_destruct;
- (id)predictionFromFeatures:error:;
- (id)objective;
- (unsigned long long)numClasses;
- (id)labelsForDataPoints;
- (void)setLabelsForDataPoints:;
- (id)initWithDescription:configuration:indexToStringLabelArray:indexToIntLabelArray:modelURL:error:;
- (id)xgBoostDataFormatFromFeatureProvider:error:;
- (id)xgBoostDataFormatFromBatchProvider:needLabels:error:;
- (void)populateXGBoostDataFormat:trainingData:dataIndex:inputName:needLabels:error:;
- (id)batchProviderFromXGboostResults:length:error:;
- (id)featureProviderFromXGboostResults:length:error:;
- (id)featureProviderArrayFromXGBoostResult:length:error:;
- (id)packageOutputWithPredictedLabel:classProbabilities:;
- (BOOL)initializeBoosterIfOneExists;
- (id)loadLabelsWithStringLabels:intLabels:;
- (BOOL)initializeAndvalidateObjectiveAndNumClassesWithConfiguration:error:;
- (void)setObjective:;
- (void)setNumClasses:;
- (id)booster;
- (void)setBooster:;
@end
