@interface NLConstrainedDataProvider : NLDataProvider
- (id)configuration;
- (id)tokenizer;
- (void).cxx_destruct;
- (id)labelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (unsigned long long)numberOfInstances;
- (id)instanceAtIndex:;
- (void)_generateMaps;
- (id)inverseLabelMap;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (id)initWithDataProvider:parameters:modelTrainer:;
@end
