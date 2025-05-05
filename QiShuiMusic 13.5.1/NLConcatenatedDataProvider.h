@interface NLConcatenatedDataProvider : NLDataProvider
- (id)initWithDataProviders:;
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
@end
