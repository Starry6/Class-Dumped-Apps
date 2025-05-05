@interface NLModelImplML : NLModelImpl
- (id)modelData;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithModelData:configuration:labelMap:vocabularyMap:documentFrequencyMap:customEmbeddingData:trainingInfo:error:;
- (id)initWithModelTrainer:error:;
- (id)initWithMLModel:configuration:;
- (id)predictedLabelForString:;
- (id)predictedLabelsForTokens:;
@end
