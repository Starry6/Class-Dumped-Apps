@interface NLModelImplLC : NLModelImpl
- (void)dealloc;
- (id)modelData;
- (id)configuration;
- (void).cxx_destruct;
- (id)labelMap;
- (id)initWithModelData:configuration:labelMap:vocabularyMap:documentFrequencyMap:customEmbeddingData:trainingInfo:error:;
- (id)initWithModelTrainer:error:;
- (id)predictedLabelForString:;
- (id)predictedLabelsForTokens:;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (id)predictedLabelHypothesesForString:maximumCount:;
- (id)predictedLabelHypothesesForTokens:maximumCount:;
- (unsigned long long)numberOfTrainingInstances;
@end
