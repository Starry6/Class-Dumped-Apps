@interface NLModelImplX : NLModelImpl
- (void)dealloc;
- (id)modelData;
- (id)configuration;
- (void).cxx_destruct;
- (unsigned long long)systemVersion;
- (id)labelMap;
- (id)initWithModelData:configuration:labelMap:vocabularyMap:documentFrequencyMap:customEmbeddingData:trainingInfo:error:;
- (id)initWithModelTrainer:error:;
- (id)predictedLabelForString:;
- (id)predictedLabelsForTokens:;
- (id)predictedLabelHypothesesForString:maximumCount:;
- (id)predictedLabelHypothesesForTokens:maximumCount:;
- (id)customEmbeddingData;
- (unsigned long long)numberOfTrainingInstances;
- (id)trainingInfo;
- (id)outputForString:;
@end
