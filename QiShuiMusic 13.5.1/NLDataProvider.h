@interface NLDataProvider : NSObject
@property (nonatomic) NLModelConfiguration configuration;
@property (nonatomic) Q numberOfInstances;
@property (nonatomic) NSString recognizedLanguage;
- (void)dealloc;
- (id)configuration;
- (id)tokenizer;
- (void).cxx_destruct;
- (unsigned long long)numberOfTokens;
- (id)labelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (id)initWithConfiguration:dataURL:;
- (unsigned long long)numberOfInstances;
- (id)instanceAtIndex:;
- (void)_generateMapsWithModelTrainer:;
- (void)_performLanguageRecognition;
- (void)_generateMaps;
- (void)generateMapsWithModelTrainer:;
- (id)inverseLabelMap;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (id)recognizedLanguage;
@end
