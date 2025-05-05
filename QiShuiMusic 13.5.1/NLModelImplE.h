@interface NLModelImplE : NLModelImpl
- (id)modelData;
- (void).cxx_destruct;
- (unsigned long long)systemVersion;
- (id)initWithModelData:configuration:labelMap:vocabularyMap:documentFrequencyMap:customEmbeddingData:trainingInfo:error:;
- (id)initWithModelTrainer:error:;
- (id)predictedLabelForString:;
- (id)predictedLabelsForTokens:;
- (id)embedding;
- (id)embeddingData;
@end
